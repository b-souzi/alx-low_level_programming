#include <stdio.h>
#include "main.h"

/**
 * flip_bits - Number of bits to flip to get from one number to another
 * @n: Number 1
 * @m: Number 2
 * Return: Number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nb = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			nb++;
		n = n >> 1;
		m = m >> 1;
	}
	return (nb);
}
