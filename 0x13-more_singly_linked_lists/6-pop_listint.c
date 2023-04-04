#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint -  a function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n)
 * @head: pointer to pointer of head
 * Return: Head node data which is (n)
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int i;

	if (*head == NULL)
		return (0);

	new_head = *head;
	i = new_head->n;
	/**head is set to the next node in the linked list*/
	*head = new_head->next;

	free(new_head);
	return (i);
}
