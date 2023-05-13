#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplication of two numbers
 * @argc: arguments count
 * @argv: arguments
 * Return: 1 in case of error
 */
int main(int argc, char *argv[])
{
	int i;
	int res = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
		res *= atoi(argv[i]);
	printf("%d\n", res);
	return (0);
}
