#include "lists.h"
/**
 * list_len - a function that returns the number of elements in a
 * a linked list_t list
 * @h: pointer to the list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t len = 0; /*A variable len is initialized to 0*/

	while (h) /*loop starting from the head node*/
	{
		h = h->next;
		len++;
	}

	return (len);
}
