#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a function that returns a to a pointer
 * @str: char
 * Return: pointer or NULL
 */
char *_strdup(char *str)
{
	char *sss;
	int i = 0;
	int r = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	sss = malloc(sizeof(char) * (i + 1));

	if (sss == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		sss[r] = str[r];
	return (sss);
}
