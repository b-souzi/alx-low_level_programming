#include "main.h"

/**
 * swap_int - swaps the values of two integer
 * @a: int to swap
 * @b: int to swap
 */
void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
