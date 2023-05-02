#include "main.h"

/**
 * int _strlen(char *s) - returns the lenght of a string
 * @s: string
 * Return: lengh
 */
int _strlen(char *s)
{
	int len = 0;

	while(*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
