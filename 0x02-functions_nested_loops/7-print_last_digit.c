#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @m: the int to extract the last digit from
 * Return: value of last digit
 */
int print_last_digit(int m)
{
	int b;

	if (n < 0)
		n = -n;
	a = n % 10;

	if (a < 0)
		a = -a;
	_putcahr(a + '0');
	return (a);
}
