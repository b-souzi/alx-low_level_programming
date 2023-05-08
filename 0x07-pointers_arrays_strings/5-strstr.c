#include "main.h"
/**
 * *_strstr - find a substring in a string
 * @haystack: input string
 * @needle: string to find
 * Return: pointer on string found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *s = haystack;
		char *d = needle;

		while (*s == *d && *d != '\0')
		{
			s++;
			d++;
		}

		if (*d == '\0')
			return (haystack);
	}

	return (0);
}
