#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @array: array to be used
 * @size: size of the array
 * @cmp: pointer to a function
 * Return: index of first element else 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
