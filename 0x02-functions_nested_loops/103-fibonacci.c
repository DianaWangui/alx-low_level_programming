#include <stdio.h>
/**
 * main - prints suma of all even fibonacci numbers under 4000000
 *
 *Return: 0 
 */
int main(void)
{
	unsigned long x, y, z;

	z = 0;
	x = 0;
	y = 1;

	while (z < 4000000)
	{
		z = x + y;
		x = y;
		y = z;
		if (z % 2 == 0)
			sum += z;
	}
	printf("%lu\n", sum);
	return (0);
}