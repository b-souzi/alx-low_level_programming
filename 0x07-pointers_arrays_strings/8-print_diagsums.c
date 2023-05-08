#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that prints the sum of the
 * two diagonals of a square matrix of integers
 * @a: array
 * @size: input
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
		sum1 += a[i * size + i];
	for (i = size - 1; i >= 0; i--)
		sum2 += a[i * size + (size - i - 1)];

	printf("%d, %d\n", sum1, sum2);
}
