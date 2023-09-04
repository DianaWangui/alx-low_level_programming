#include "main.h"
/**
 * _isdigit - checks if the number entered is a digit
 *@c: character to be checked
 *
 * Return: 1 if character is digit, 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
