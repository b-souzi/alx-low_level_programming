#include <stdio.h>

/**
 * main - print numbers
 *
 * Description: prints the numbers from 0 to 9
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	char nl = '\n';

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	putchar(nl);
	return (0);
}
