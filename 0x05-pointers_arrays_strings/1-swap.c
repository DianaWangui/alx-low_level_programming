#include "main.h"
/**
 * swap_int - a function that swaps the value of two integers
 * @a: The integer to be swaped
 * @b: The integer to be swapped with
 * Return: 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;

	*b = temp;
}
