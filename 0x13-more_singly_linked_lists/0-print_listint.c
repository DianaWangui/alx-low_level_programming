#include "lists.h"
/**
 * print_listint - a function that prints all elemnts in a listint_t
 * @h: the linked list to prints
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
