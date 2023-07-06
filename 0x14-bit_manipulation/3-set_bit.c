#include <stdio.h>
#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: Number
 * @index: Index
 * Return: 1 if ok, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k;

	if (index > 63)
		return (-1);
	k = 1 << index;
	*n = (*n | k);
	return (1);
}
