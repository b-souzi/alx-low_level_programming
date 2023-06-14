#include "main.h"

/**
 * append_text_to_file - Appends text at the end of the file
 * @filename: A pointer to the name of the file
 * @text_content: the string to add to the end
 *
 * Return: -1 if fails 1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int k, m, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	k = open(filename, O_WRONLY | O_APPEND);
	m = write(k, text_content, len);

	if (k == -1 || m == -1)
		return (-1);
	close(k);
	return (1);
}
