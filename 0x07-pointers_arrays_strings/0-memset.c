#include "main.h"
/**
 * *_memset - A function that fills memory with a constant byte
 * @s: Apointer to the memory
 * @b: constant byte
 * @n: size of memory to be assinged
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
