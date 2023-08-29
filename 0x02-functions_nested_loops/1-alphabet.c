#include "main.h"
/**
 * print_alphabet - prints the alphabets in lover case
 *
 */
void print_alphabet(void)
{
	char current_char = 'a';

	while (current_char <= 'z')
	{
		_putchar(current_char);
		current_char++;
	}
	_putchar('\n');
}
