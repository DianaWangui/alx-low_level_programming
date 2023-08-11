#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - This is the entry point to the program
 *
 * This function prints random number, stores it in the variable 'n',
 *and then prints whether the number is positive, negative or zero.
 * Return: :0 (Success)
 */
int main(void)
{
	int n;

	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;

	if (m > 5)
	{
		printf("The last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m == 0)
	{
		printf("The last digit of %d is %d and is 0\n", n, m);
	}
	else if (m < 6 && m != 0)
	{
		printf("The last digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	return (0);
}
