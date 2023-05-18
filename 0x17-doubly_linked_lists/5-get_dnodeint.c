#include "lists.h"

/**
* get_dnodeint_at_index - a function that returns the nth
* node of a dlistint_t linked list.
* @index: index of the node
* @head: The pointer to the head of the list
* Return: if the node does not exist, return NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i++ == index)
			break;
		head = head->next;
	}

	return (head);
}
