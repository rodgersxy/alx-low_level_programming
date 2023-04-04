#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: Address of listint_t list head
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			tmp = *head;/*assigns value of head to tmp*/
			*head = tmp->next;
			free(tmp);/*free*/
		}
	}

	else
	{
		return;
	}

	free(*head);
	*head = NULL;
}
