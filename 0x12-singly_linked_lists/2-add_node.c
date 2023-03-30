#include "lists.h"
#include <string.h>
/**
 * add_node - Function that adds node at the beginning of the list
 * @head: pointer to a pointer of type list_t
 * @str: string to be contained in the new node
 * Return: pointer to the new head of list, otherwise NULL on fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;     /*declare a new pointer temp of type list_t*/
	int length = 0;

	temp = malloc(sizeof(list_t)); /*allocate memory for temp*/

	if (temp == NULL)
		return (NULL);

	while (str[length])
		length++;

	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
