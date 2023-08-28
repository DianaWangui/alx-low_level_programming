#include "main.h"
/**
 * *_strpbrk - A function that searches a string for any set of bytes
 * @s: Srting to be checked
 * @accept: string to be checked
 * Return: a pointer to the byte in n
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
