#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - Write a function that concatenates two strings
 * @s1:pointer to first string
 * @s2:pointer to second string
 * @n: number of bytes and null terminated
 * Return: pointer to the string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, k, s1_lenght, s2_lenght;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1))
	if (!s)
		return (NULL);
	while (i < len1)
	{
		s[i] = s1[i];
		i++
	}

	while (n < len2 && i < (len1 + n))
		s[i++] = s2[k++];

	while (n >= len2 && i < (len1 + len2))
		s[i++] = s2[k++];
	s[i] = '\0';

	return (s);
}
