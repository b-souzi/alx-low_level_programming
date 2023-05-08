#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: input string
 * @accept: acceptance string
 * Return: number of accepted bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	int cpt = 0;
	char *str1 = s;
	char *str2 = accept;

	while (str1[i] != '\0')
	{
		j = 0;
		while (str2[j] != '\0')
		{
			if (str2[j] == str1[i])
			{
				cpt++;
				break;
			}
			j++;
		}
		if (s[i] != accept[j])
			break;
		i++;
	}
	return (cpt);
}

