#include "lists.h"
#include <stdio.h>
/**
 * reverse_listint  -  a function that reverses a listint_t linked list.
 * @head: pointer to pointer to the head of the list
 * Return: Pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next;

	/*checks if the head of the linked list is NULL*/
	if (*head == NULL)
	{
		return (NULL);
	}

	while (*head != NULL)
	{
		/*assigns the next pointer to the next node*/
		next = (*head)->next;
		/*makes the next pointer point to the previous node*/
		(*head)->next = previous;
		previous = *head;
		(*head) = next;
	}
	/*sets the head of the linked list to the last node*/
	*head = previous;

	/*returns a pointer to first node*/
	return (*head);
}
