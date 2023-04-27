#include "main.h"

/**
 * print_number - prints the number
 * @n: number
 * return: void
 */

void print_number(int n)
{
	unsigned int na;

	if (n < 0)
	{
		na = -n;
		_putchar('-');
	}
	else
		na = n;
	if (na / 10)
	{
		print_number(na / 10);
	}
	_putchar((na % 10) + '0');
}
