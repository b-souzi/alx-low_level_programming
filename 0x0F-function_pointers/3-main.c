#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main program
 * @argc : Arguments count
 * @argv: Agurments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int first, second, result;
	char *operator;
	int (*good_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	first = atoi(argv[1]);
	operator = argv[2];
	second = atoi(argv[3]);
	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*operator == '/' || *operator == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	good_func = get_op_func(operator);
	result = good_func(first, second);
	printf("%d\n", result);
	return (0);
}
