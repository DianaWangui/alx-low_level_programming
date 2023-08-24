#include "main.h"
/**
 * *_strncat - funtion that contatenate two strings using n-bytes
 * from src
 * @src: The string to be concatenated
 * @dest: The string to be concatenated to
 * Return: 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_new = dest;

	while (*dest_new != '\0')
	{
		dest_new++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest_new = *src;
		dest_new++;
		src++;
		n--;
	}
	*dest_new = '\0';
	return (dest);
}
