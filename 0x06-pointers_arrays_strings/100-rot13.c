#include "main.h"

/**
 * *rot13 - rotate by 13 places
 * @str: string
 * Return: pointer
 */

char *rot13(char *str)
{
	int i = 0;
	int j;
	char old[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char new[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i] != '\0')
	{
		for (j = 0; old[j] != '\0'; j++)
		{
			if (str[i] == old[j])
			{
				str[i] = new[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
