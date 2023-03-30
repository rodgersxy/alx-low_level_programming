#include "lists.h"
#include <string.h>
/**
 * add_node_end - Function that adds a node at the end of linked list
 * @head: pointer to a list_t pointer that point to the head struct
 * @str: string to add as node
 * Return: pointer to new element of list, NULLon failure
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	unsigned int length = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	while (str[length]) /*calculate length of the input string by iterating*/
		length++;
	new_node->len = length;
	new_node->str = strdup(str);

	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = NULL;/* Iterates through the linked list*/
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}

	return (new_node);
}
