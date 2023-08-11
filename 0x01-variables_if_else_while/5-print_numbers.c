#include <stdio.h>
/**
 * main - prints the digital number of base 10 starting from 0
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 9; i++)
	{
		putchar("%d", i);
	}
	putchar('\n');
	return (0);
}
