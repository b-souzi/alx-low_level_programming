#include "main.h"

/**
 * flip_bits - Function that returns the number of bits
 * @n: Number one
 * @m: Number two
 * Return: Number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbbits;

	for (nbbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbbits++;
	}
	return (nbbits);
}
