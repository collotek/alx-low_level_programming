#include "lists.h"

/**
 * print_list -i prints all the elements of the list
 * @h: linked list
 * Return: number of elements in the list
 */
size_t print_list(const list_t *h)
{
	size_t elemnts_no;

	elemnts_no = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		elemnts_no++;
	}
	return (elemnts_no);
}
