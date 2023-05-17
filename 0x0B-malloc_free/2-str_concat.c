#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenate two strings in memory
 * @s1: first string
 * @s2: second string
 * Return: Pointer or null
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int r = 0;
	int s = 0;
	char *all;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	all = malloc(sizeof(char) * (i + j + 1));
	if (all == NULL)
		return (NULL);
	for (r = 0; s1[r] != '\0'; r++)
		all[r] = s1[r];
	for (; s2[s] != '\0'; r++)
	{
		all[r] = s2[s];
		s++;
	}
	return (all);
}
