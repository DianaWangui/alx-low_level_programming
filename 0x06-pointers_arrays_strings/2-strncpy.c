#include "main.h"
/**
 * _strncpy - copies up to n characters from src to dest.
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of character copy
 * Return: Apointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return dest;
}
