#include "main.h"
/**
* print_times_table - write a function that prints a times table
* @n: Number
* Return: the absolute value
*/
void print_times_table(int n)
{
	int num, mult, prod;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');
				prod = num * mult;

				if (prod <= 9)
					_putchar(' ');
				else if (prod <= 99)
					_putchar((prod / 10) + '0');
				else
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10) % 10) + '0');
				}

				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
