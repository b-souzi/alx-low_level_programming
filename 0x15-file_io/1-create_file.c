#include "main.h"

/**
 * _strlen - lenght of string
 * @str: string
 * Return: length
 */
ssize_t _strlen(const char *str)
{
	ssize_t len = 0;

	if (!str)
		return (-1);
	while (*str++)
		++len;
	return (len);
}

/**
 * create_file - creates a file
 * @filename: A pointer to create
 * @text_content: A pointer to a string
 * Return: upon success, return 1, or -1
*/
int create_file(const char *filename, char *text_content)
{
	ssize_t b_written = 0;
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content)
		b_written = write(fd, text_content, _strlen(text_content));
	close(fd);

	if (b_written < 0)
		return (-1);
	return (1);
}
