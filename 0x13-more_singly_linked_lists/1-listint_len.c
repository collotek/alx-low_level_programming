#include "lists.h"

/**
 * listint_len - no of elements in a linked list
 * @h: pointer to the linked list
 * Return: number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
