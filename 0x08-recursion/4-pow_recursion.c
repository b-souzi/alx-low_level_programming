#include "main.h"
/**
 * _pow_recursion - power function
 * @x: input number
 * @y: power number
 * Return: result or -1 if power negative
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
