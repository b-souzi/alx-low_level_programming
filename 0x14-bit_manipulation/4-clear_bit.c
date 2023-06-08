#include "main.h"

/**
 * clear_bit - Write a function that sets the value of a bit to 0
 * @n: pointer
 * @index: index of bit
 *
 * Return: 1 if succeful, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
