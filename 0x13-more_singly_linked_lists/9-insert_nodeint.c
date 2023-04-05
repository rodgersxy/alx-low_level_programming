#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - a function that inserts a
 * new node at a given position
 * @head: The node at the beginning of the list
 * @idx: The index to insert the node
 * @n: data to be stored in the new node
 * Return: Address of new node,otherwise NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *tmp = *head;
	listint_t *newNode = malloc(sizeof(listint_t));

	/*check if pointer to newNode of the linked list is NULL*/
	if (newNode == NULL)
		return (NULL);
	/*set the n value of the new node to be the integer n*/
	newNode->n = n;

	if (idx == 0)
	{
		/*set the next pointer of newNode*/
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	while (tmp && i < idx)
	{
		newNode->next = tmp->next;
		if (i == idx - 1)
		{
			tmp->next = newNode;
			return (newNode);
		}
		else
		/*set temp to the next node in the linked list*/
			tmp = tmp->next;
	i++;
	}

	return (NULL);
}
