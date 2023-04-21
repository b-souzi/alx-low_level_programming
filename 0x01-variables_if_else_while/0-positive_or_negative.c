#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print random
 *
 * Description: prints random number and negative/zero/positive
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n > 0)
		printf("%d is positive\n", n);
	return (0);
}
