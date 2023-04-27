#include <stdio.h>

/**
 * main - print numbers
 *
 * Description: prints the numbers from 00 00 to 99 99
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n1;
	int n2;
	int n3;
	int n4;
	int t1;
	int t2;

	for (n1 = '0'; n1 <= '9'; n1++)
	{
		for (n2 = '0'; n2 <= '9'; n2++)
		{
			for (n3 = '0'; n3 <= '9'; n3++)
			{
				for (n4 = '0'; n4 <= '9'; n4++)
				{
					t1 = n1*10 + n2;
					t2 = n3*10 + n4;
					if (t1 != t2)
					{
						putchar(n1);
						putchar(n2);
						putchar(' ');
						putchar(n3);
						putchar(n4);
						if (n1 != 'x')
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
