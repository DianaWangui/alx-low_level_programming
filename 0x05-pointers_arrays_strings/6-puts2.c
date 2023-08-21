#include "main.h"
/**
 * puts2 - prints every character of a string starting with the
 * first character followed by a new line
 * @str: String to be printed
 * Return: 0 Always
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
