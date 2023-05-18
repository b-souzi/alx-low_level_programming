#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - Write a function that allocates memory for an array,
 * @nmemb: number of element
 * @size: the byte size of each array element
 * Return: nmemb or size is 0 or the function is NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(nmemb * size);
	if (m == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		m[i] = 0;

	return (m);
}
