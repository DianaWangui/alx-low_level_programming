#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: the pointer to the character string to be checked
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return length;
}
