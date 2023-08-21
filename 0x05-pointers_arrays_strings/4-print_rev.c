#include "main.h"
/**
 * print_rev - a function that prints a string in reverse
 * followed by a new line
 * @s: The pointer to the string printed
 * Return: Always 0
 */
void print_rev(char *s)
{
	int length = 0;

	int i;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
