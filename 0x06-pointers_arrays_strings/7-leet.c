#include "main.h"

/**
 * leet - Encodes a string in 1337
 * @str: string
 *
 * Return: modified string
 */
char *leet(char *str)
{
	int i, j;
	char *old = "aAeEoOtTlL";
	char *new = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == old[j])
			{
				str[i] = new[j];
			}
		}
	}
	return (str);
}
