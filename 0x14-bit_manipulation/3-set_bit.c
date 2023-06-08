#include "main.h"

/**
 *  set_bit - Write a function that sets the value of a bit to 1
 *  @n: pointer
 *  @index: index of the bit
 *
 *  Return: 1 if success -1 if didn't
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
