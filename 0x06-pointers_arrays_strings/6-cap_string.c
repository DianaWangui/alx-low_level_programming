#include "main.h"
/**
 * is_separator - checks if a character is a word separator
 * @c: The character to check
 * Return: true if the character is a separator, false otherwise
 */
int is_separator(char c)
{
	char separators[] = "\t\n,;.!?\"(){}";

	int i;

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
		{
			return (1);
		}
	}
	return (0);
}
/**
 * cap_string - Capitalizes all words of the string
 * @str: The input string
 * Return: A pointe to the modified string
 */
char *cap_string(char *str)
{
	int new_word = 1;

	char *ptr = str;

	while (*ptr != '\0')
	{
		if (is_separator(*ptr))
		{
			new_word = 1;
		}
		else if (new_word)
		{
			if (*ptr >= 'a' && *ptr <= 'z')
			{
				*ptr = *ptr -('a' - 'A');
			}
			new_word = 0;
		}
		ptr++;
	}
	return (str);
}
