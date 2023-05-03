#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: destination
 * @src: source
 * Return: pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i;

	while (src[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
