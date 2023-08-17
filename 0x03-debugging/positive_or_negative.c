#include "main.h"
/**
 * positive_or_negative - This function prints random number
 * stores it in the variable i
 * and then prints whether the number is positive, negative or zero.
 * @i: the number passed to the fuction 
 * Return: :0 (Success)
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
}
