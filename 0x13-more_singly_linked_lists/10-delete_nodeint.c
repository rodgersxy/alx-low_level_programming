#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - a function that deletes
 * the node at index index of a listint_t linked list
 * @head: poinetr to pointer of the head
 * @index: index of the node
 * Return: Will be 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous, *current;
	unsigned int i = 0;

	previous = *head;
	if (*head == NULL || head == NULL)
		return (-1);

	if (index == 0)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
		return (1);
	}

	previous = *head;

	for (i = 0; i < index - 1 && previous->next != NULL; i++)
		previous = previous->next;

	if (previous->next == NULL)
		return (-1);

	current = previous->next;
	previous->next = current->next;
	free(current);

	return (1);
}
