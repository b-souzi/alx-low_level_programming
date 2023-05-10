#include "main.h"
/**
 * sqrt_recursion - recursive square root of number
 * @n: input number
 * @i: iteration
 * Return: result
 */
int sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_recursion(n, i + 1));
}

/**
 * _sqrt_recursion - square root of number
 * @n: input number
 * Return: result
 */
int _sqrt_recursion(int n)
{
	return (sqrt_recursion(n, 0));
}
