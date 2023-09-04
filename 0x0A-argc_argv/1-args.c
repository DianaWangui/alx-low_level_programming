#include <stdio.h>
#include "main.h"
/**
 * main - print number of arguement
 * @argc: number of arguments
 * @argv: array of argument
 * Return: always 0(sucess)
 */
int main(int argc, char *argv[])
{
	(void)argv; /*ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
