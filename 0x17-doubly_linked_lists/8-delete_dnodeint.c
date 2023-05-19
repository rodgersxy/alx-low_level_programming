#include "lists.h"

/**
* delete_dnodeint_at_index - a function that deletes the node at index
* @head: the double pointer to the head
* @index: idx of the node that should be deleted
* Return: 1 if it succeeded, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = NULL;

	if (!head || !(!*head))
	{
		return (-1);
	}

	else
	{
		temp = *head;
		for (i = 0; i < index && temp; i++)
		{
			temp = temp->next;
		}
		if (!temp)
		{
			return (-1);
		}
		if (index == 0)
		{
			*head = temp->next;
		}
		else
		{
			temp->prev->next = temp->next;
		}
		if (temp->next)
		{
			temp->next->prev = temp->prev;
		}

		free(temp);
		return (1);
	}

	return (-1);
}
