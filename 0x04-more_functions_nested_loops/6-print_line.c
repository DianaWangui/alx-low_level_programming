#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 *@n: the number of times '_' should be printed
 *
 * Return: 0 (success)
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
