#include "main.h"
/**
 * *_strcat - A function that appends the src string to the dest string
 * overwriting the terminating null at the end of dest
 * @src: The string to append
 * @dest: The string to append to
 * Return: 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	char *dest_end = dest;

	while (*dest_end != '\0')
	{
		dest_end++;
	}
	while (*src != '\0')
	{
		*dest_end = *src;
		dest_end++;
		src++;
	}
	*dest_end = '\0';
	return (dest);
}
