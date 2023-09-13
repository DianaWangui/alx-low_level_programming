#include "function_pointers.h"
/**
 * print_name - a function that prints a name
 * @name: name to be printed
 * @f: pointer to a function
 * @char: pointer to a character
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
