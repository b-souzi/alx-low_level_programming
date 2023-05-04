#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: the string to be capitalized
 * Return: pointer
 */
char *cap_string(char *str)
{
	int i, j;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		for (j = 0; j < 13; j++)
		{
			if (str[i] == spe[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
			}
		}
	}
	return (str);
}
