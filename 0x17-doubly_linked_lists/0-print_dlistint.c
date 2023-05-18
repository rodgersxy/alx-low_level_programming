#include "lists.h"

/**
* print_dlistint - function that prints all the elements of
* a dlistint_t list.
* @h: head
* Return: Number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t node = 0;

	tmp = h;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		node++;
	}

	return (node);
}
