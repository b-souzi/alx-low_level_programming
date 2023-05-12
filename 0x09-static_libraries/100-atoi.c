#include "main.h"
/**
 * _atoi - convert a string to an interger
 * @s: string
 * Return: int
 */
int _atoi(char *s)
{
	int i = 0;
	int n = 0;
	int sign = 1;

	while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while ((s[i] >= '0' && s[i] <= '9') && s[i] != 0)
	{
		if (n >= 0)
		{
			n = n * 10 - (s[i] - '0');
			i++;
		}
		else
		{
			n = n * 10 - (s[i] - '0');
			i++;
		}
	}
	sign *= -1;
	return (n * sign);
}
