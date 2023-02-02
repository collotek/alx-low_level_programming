#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - prints all elements of a list
 * @h: pointer to a list
 * Return: the number of elements in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t all_elements = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		all_elements++;
	}
	return (all_elements);
}
