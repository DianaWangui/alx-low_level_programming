include "main.h"
/**
 * print_alphabets - prints the alphabets in lover case
 *
 */
void print_alphabets(void)
{
	char current_char = 'a';

	while (current_char <= 'z')
	{
		_putchar(current_char);
		current_char++;
		_putchar('\n');
	}
}
