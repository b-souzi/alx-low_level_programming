#include <stdio.h>

/**
 * positive_or_negative - test number
 *
 * Description: prints random number and negative/zero/positive
 */

void positive_or_negative(int n)
{
	if (n < 0)
		printf("%d is negative\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n > 0)
		printf("%d is positive\n", n);
}
