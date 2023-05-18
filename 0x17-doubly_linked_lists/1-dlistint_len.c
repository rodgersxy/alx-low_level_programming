#include "lists.h"

/**
* dlistint_len - a function that returns the number of elements in a linked lis
* @h: head of the list
* Return: Number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t node = 0;

	for (tmp = h; tmp != NULL; tmp = tmp->next)
	{
		node++;
	}

	return (node);
}
