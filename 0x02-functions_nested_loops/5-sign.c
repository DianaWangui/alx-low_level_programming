#include "main.h"
/**
 * print_sign - prints the sign of the number passed
 * @n: int to check
 *
 * Return: 1 if number is greate than zero
 * 0 and prints 0 if number is zero
 * -1 and prints - if number is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
	_putchar('\n');
}
