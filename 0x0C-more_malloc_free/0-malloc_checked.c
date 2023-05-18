#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Write a function that allocates memory
 * @b: number of bytes to allocate
 * Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
