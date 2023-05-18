#include "lists.h"
/**
* free_dlistint - a function that frees a dlistint_t list.
* @head: pointer to the head of the list
* Return: Nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
