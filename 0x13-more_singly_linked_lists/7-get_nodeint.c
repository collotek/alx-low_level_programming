

#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a list
 * @head: beginning of a list pointer
 * @index: position in memory
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int p;

	for (p = 0; p < index && head != NULL; p++)
	{
		head = head->next;
	}
	return (head);
}
