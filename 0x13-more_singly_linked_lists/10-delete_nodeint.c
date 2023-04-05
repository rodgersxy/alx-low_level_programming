#include "lists.h"
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

	for (i = 0; i < index - 1 && previous != NULL && index != 0; i++)
		previous = previous->next;

	if (index == 0)
	{
		current = previous->next;
		/*Free the target node*/
		free(previous);
		*head = current;
	}

	else
	{
		if (previous->next == NULL)
			/*will update the linked list after the deletion */
			current = previous->next;
		else
			current = previous->next->next;
		free(previous->next);
		previous->next = current;
	}

	return (1);
}
