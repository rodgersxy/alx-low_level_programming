#include "lists.h"
/**
 * free_list - a function that frees all elements in a linked list
 * @head: pointer to head elements of list
 * Return: Void
 *
 */
void free_list(list_t *head)
{
	list_t *temp;

	/*defines a temporary pointer temp of type list_t*/
	temp = head;
	while (head)
	{
		temp = head;/*temp is set to the value of head*/
		head = head->next;/*head is updated to the next pointer of the current node*/
		free(temp->str);
		free(temp);
	}

	free(head);
}
