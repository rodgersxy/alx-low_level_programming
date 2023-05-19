#include "lists.h"

/**
* insert_dnodeint_at_index - function that insert a new node at a
* give position
* @h: double pointer to the head of the linked list
* @idx: represents index where new node should be inserted
* @n: value of new node
* Return: the address of the new node, or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	/*initialize*/
	unsigned int i = 0;
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *temp_node = *h;

	if (new_node != NULL)
	{
		new_node->n = n;
		if (idx == 0)
		{
			if (*h != NULL)
			{
				new_node->next = *h;
				(*h)->prev = new_node;
			}
			*h = new_node;
			return (new_node);
		}

		while (i < idx - 1 && temp_node)
		{
			temp_node = temp_node->next;
			i++;
		}

		if (temp_node != NULL)
		{
			if (temp_node->next)
				temp_node->next->prev = new_node;
			new_node->next = temp_node->next;
			new_node->prev = temp_node;
			temp_node->next = new_node;
			return (new_node);
		}
	}

	return (NULL);
}
