#include"main.h"
/**
 * *_memset - function that fills memory with a constant byte
 * @s: strating address of memory to be filed
 * @b: the value
 * @n: number of bytes to change
 * Return: changed array with new value for n bytes
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
