#include "main.h"
/**
* print_sign - print a sign of a number
*
*
* @n : character
* Return: 1 and prints + if n is greather than zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	return (0);
}
