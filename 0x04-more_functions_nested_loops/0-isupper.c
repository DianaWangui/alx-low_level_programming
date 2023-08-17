#include "main.h"
/**
 * _isupper - checks if the charater is uppercase
 * @c: character to be checked
 *
 * Return: 1 if character is upper, 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
