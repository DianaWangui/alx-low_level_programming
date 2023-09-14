#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - a variadic function that prints numbers
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: 0 always
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	int num;

	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
