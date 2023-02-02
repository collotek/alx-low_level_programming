#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: poits to the beginning of the list
 * @index: position of the node
 * Return: 1 if success and -1 if failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int p;
	listint_t *prv;
	listint_t *next;

	prv = *head;

	if (index != 0)
	{
		for (p = 0; p < index - 1 && prv != NULL; p++)
		{
			prv = prv->next;
		}
	}
	if (prv == NULL || (prv->next == NULL && index != 0))
	{
		return (-1);
	}
	next = prv->next;
	if (index != 0)
	{
		prv->next = next->next;
		free(next);
	}
	else
	{
		free(prv);
		*head = next;
	}
	return (1);
}
