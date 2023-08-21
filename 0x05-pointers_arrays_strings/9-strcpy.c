#include "main.h"
/**
 * *_strcpy - A function that copies the string pointed to by
 * src including the terminated null byte to the buffer
 * pointed by dest
 * @*dest: ponter
 * @char: the character string
 * @*src: pointer to the string
 * Return: 0 Always
 */
char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original_dest);
}
