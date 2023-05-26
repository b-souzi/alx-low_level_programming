#ifndef Variadic_Functions
#define Variadic_Functions
#include <stdarg.h>

/**
 * struct formats - Data format
 * @t: Type
 * @f: Function
 */
typedef struct formats
{
	char *t;
	void (*f)(va_list);
} formats_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
