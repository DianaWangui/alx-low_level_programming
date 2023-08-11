#include <stdio.h>
/**
 * main - print the alphabet
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int c = 'a';

	int s = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (s <= 'Z')
	{
		putchar(s);
		s++;
	}
	putchar('\n');
	return (0);
}
