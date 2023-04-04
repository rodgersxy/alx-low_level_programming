#include "lists.h"
/**
 * sum_listint -  a function that returns the sum of all the
 * data (n) of a listint_t linked list.
 * @head: head of list
 * Return: the sum otherwise 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	while (head != NULL)
	{
		/*add the value */
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
