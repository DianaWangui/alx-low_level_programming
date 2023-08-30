#include "main.h"
/**
 * _strlen_recursion - A function that retuunrs the length of a string
 * @s: The string to be checked
 * Return 0 success
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
