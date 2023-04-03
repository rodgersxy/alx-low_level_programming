#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - a function that adds a new node at
 * the beginning of a listint_t list
 * @head: pointer to a pointer to the head of the list
 * @n: data t add to the new node
 * Return: Pointer to the new node else NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t)); /*to create new node*/

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	/*sets the next member of new_node to the current head */
	new_node->next = *head;
	/*pointer to pointer head to point to the new node*/
	*head = new_node;
	return (new_node);
}
