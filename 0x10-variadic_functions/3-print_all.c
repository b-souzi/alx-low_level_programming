#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - Prints a char
 * @c: Char
 */
void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_integer - Prints an integer
 * @i: Integer
 */
void print_integer(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_float - Prints a float
 * @f: Float
 */
void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_string - Prints a string
 * @s: String
 */
void print_string(va_list s)
{
	char *str = va_arg(s, char*);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}

/**
 * print_all - Print anything
 * @format: Print format
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	int j;
	va_list ap;
	char *sep = "";
	formats_t typd[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (typd[j].t != NULL)
		{
			if (*(typd[j].t) == format[i])
			{
				printf("%s", sep);
				typd[j].f(ap);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
