#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - a function that adds a new node at
 * the end of a listint_t list.
 * @head: pointer to pointer head of the list
 * @n: data to add
 *
 * Return: The addrees of the new element else NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	/*data to a new node*/
	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		/*Set the next pointer to NULL*/
		new_node->next = NULL;
		return (new_node);
	}
	else
	{
		temp = *head;

		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}

	return (new_node);
}
