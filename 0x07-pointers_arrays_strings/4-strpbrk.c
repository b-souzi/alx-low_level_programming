#include "main.h"
/**
 * *_strpbrk - Searches a string for any of a set of bytes
 * @s: input string
 * @accept: acceptance string
 * Return: pointer to the match
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
