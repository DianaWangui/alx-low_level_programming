#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers
 *
 * Return: Nothing.
 */

int main(void)
{
	int count;

	unsigned long x, y, z;

	for (count = 1; count < 50; count++)
	{
		z = x + y;
		x = y;
		y = z;
		printf("%lu\n", z);
	}
	printf("%lu\n", z + x);
	return (0);
}
