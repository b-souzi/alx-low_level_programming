#include "main.h"
/**
 * prime_nb - recursive prime function
 * @n: input number
 * @i : iteration
 * Return: result
 */
int prime_nb(int n, int i)
{
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime_nb(n, i + 1));
}

/**
 * is_prime_number - test prime number
 * @n: input number
 * Return: 1 of prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_nb(n, 2));
}
