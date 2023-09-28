#include "main.h"
/**
 * binary_to_uint - a function that converts a binary number
 * to unsigned int
 * @b: pointer to the string of 0 and 1
 * Return: the converted number or 0 if
 * there is a char thats not 0 or 1 or if it NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;

	unsigned int total = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		total = (total << 1) | (b[i] - '0');
		i++;
	}
	return (total);

}
