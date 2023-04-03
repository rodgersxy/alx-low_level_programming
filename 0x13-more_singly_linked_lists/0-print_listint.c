#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function that prints all elements of the list
 * @h: pointer to the head of the list
 * Return: The nimber of nodes in the list
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;

		nodes++;
	}

	return (nodes);
}
