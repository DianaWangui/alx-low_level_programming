#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 *
 * Return: 0 (success)
 */
void print_line(int n)
{
	int i;

	if (i <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
