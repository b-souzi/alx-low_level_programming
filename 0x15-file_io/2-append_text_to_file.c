#include "main.h"

/**
 * append_text_to_file -  appends text at the end of a file
 * @filename: A pointer for the file
 * @text_content: the string to add in the end
 *
 *Return: if the function is 0 pout -1 or dosent exsist -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int k, l, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	k = open(filename, O_WRONLY | O_APPEND);
	l = write(k, text_content, len);

	if (k == -1 || l == -1)
		return (-1);
	close(k);

	return (1);

}
