#include "lists.h"

/**
 * list_len - returns number of elements in a list
 * @h: points to a linked list
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t no_elements;

	no_elements = 0;
	while (h != NULL)
	{
		h = h->next;
		no_elements++;
	}
	return (no_elements);
}
