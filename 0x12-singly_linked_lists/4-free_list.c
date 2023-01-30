#include "lists.h"

/**
 * free_list - frees list_t
 * @head: begining of list_t
 * Return: 0
 */
void free_list(list_t *head)
{
	/*the current list*/
	list_t *list_in;

	while ((list_in = head) != NULL)
	{
		head = head->next;
		free(list_in->str);
		free(list_in);
	}
}
