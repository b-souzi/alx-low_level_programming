#include <stdio.h>

/**
 * main - print alphabet
 *
 * Description: prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	char nl = '\n';

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar(nl);
	return (0);
}
