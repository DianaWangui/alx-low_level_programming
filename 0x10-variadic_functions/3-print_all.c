#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - a variadic function that prints anything
 * @format: list of type args passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;

	char *str;

	char *s = "";

	const char *fmt_iter = format;

	va_start(args, format);

	while (fmt_iter && *fmt_iter)
	{
		switch (*fmt_iter)
		{
			case 'c':
				printf("%s%c", s, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", s, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", s, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "nil";
				printf("%s%s", s, str);
				break;
			default:
				fmt_iter++;
				continue;
		}
		s = ", ";
		fmt_iter++;
	}
	va_end(args);
	printf("\n");
}
