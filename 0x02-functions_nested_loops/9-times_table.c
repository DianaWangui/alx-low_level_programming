#include "main.h"
/**
 * times_table - print the 9 times table
 */
void times_table(void)
{
	int j;

	int i;

	int prod;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
	}
	for (j = 0; j <= 9; j++)
	{
		_putchar(',');
		_putchar(' ');
	}
	prod = i * j;

	if (prod <= 9)
	{
		_putchar(' ');
	}
	else
	{
		_putchar((prod / 10) + '0');
	}
	_putchar('\n');
}
