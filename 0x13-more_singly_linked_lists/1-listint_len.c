#include <stdio.h>
#include "lists.h"
/**
 * listint_len - a function that returns the number of elements
 * in a linked listint_t list
 * @h: a pointer to listint_t
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next; /*update h pointer to point next elem*/
		nodes++;
	}

	return (nodes);
}
