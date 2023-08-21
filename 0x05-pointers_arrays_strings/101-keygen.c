#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Generates a random valid password
 *
 * Return: Always 0
 */
int main(void)
{
	srand(time(NULL));

	char password[9];

	int i;

	for (i = 0; i < 8; i++)
	{
		password[i] = rand() % 94 + 33;
	}
	password[8] = '\0';
	printf("%s\n", password);
	return (0);
}
