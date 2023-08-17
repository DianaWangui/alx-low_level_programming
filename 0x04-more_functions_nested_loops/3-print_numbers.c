#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9 followed by new line
 *
 * Return: 0 (Success)
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
