#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth node
 * of a listint_t linked list.
 * @head: pointer to head of the list
 * @index: index of the node
 * Return: pointer otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node = head;

	/*loop through the list*/
	for (i = 0; node && i <= index; i++)
	{
		if (i == index)
			return (node);
		/*moves pointer node to the next in the list*/
		node = node->next;
	}

	return (NULL);
}
