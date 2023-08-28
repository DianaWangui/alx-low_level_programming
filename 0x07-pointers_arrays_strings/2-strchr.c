#include "main.h"
/**
 * *_strchr - A function that locates a character in a string
 * @s: Pointer to the string
 * @c: Character to be checked
 * Return: pointer to the first occurence of character
 * or NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
