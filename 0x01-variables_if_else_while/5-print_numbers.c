#include <stdio.h>
/**
 * main - prints the digital number of base 10 starting from 0
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
