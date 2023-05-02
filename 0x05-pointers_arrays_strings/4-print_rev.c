#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int leni = 0;
	int i;

	while (*s != '\0')
	{
		leni++;
		s++;
	}
	s--;
	for (i = leni; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
