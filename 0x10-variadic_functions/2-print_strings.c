#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - a variadic function that prints strings
 * @separator: string to be printed b2n strings
 * @n: number of string passed
 * @...: variable arguments of type char
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i;

	char *a;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		a = va_arg(args, char *);
		if (!a)
			printf("nil");
		if (!separator)
			printf("%s", a);
		else if (separator && i != n - 1)
		{
			printf("%s", a);
		}
		else
			printf("%s%s", separator, a);
	}
	va_end(args);
	printf("\n");
}
