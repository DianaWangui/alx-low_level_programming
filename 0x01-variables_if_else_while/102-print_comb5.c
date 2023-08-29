#include <stdio.h>
/**
 * main-prints the combination of numbers between 0,
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 0;

	int j = 0;

	while (i <= 99)
	{
		if (i <= j)
		{
			int d1 = i / 10;

			int d2 = i % 10;

			int d3 = j / 10;

			int d4 = j % 10;

			putchar(d1 + '0');
			putchar(d2 + '0');
			putchar(' ');
			putchar(d3 + '0');
			putchar(d4 + '0');

			if (!(i == 99 && j == 99))
			{
				putchar(',');
				putchar(' ');
			}

		}
		j++;
	}
	i++;
	return (0);
}
