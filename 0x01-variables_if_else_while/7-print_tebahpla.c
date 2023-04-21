#include <stdio.h>

/**
 * main - print alphabet
 *
 * Description: prints the alphabet in lowercase reversed
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
