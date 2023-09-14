#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - variable function that gives the sum of all its parameters
 * @n: the number of arguments
 * @...: The variable arguments of int type
 *
 * Return: sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;

	unsigned int i;

	va_list args;

	va_start(args, n);
	if (n == 0)
	{
		va_end(args);
		return (0);
	}
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
