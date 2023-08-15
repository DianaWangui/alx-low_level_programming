#include "main.h"
/**
 * _islower - checks if a character c is lowercase character
 * @c: the character to be checked
 *
 * Return: 1 for lower case deposit 0 for the rest
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		_putchar(1);
	}
	else
	{
		_putchar(0);
	}
	_putchar('\n');
}
