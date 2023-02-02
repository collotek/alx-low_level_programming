#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: points to the beginning of a list
 * @idx: indx of the list where the new node should be added
 * @n: integer
 * Return: address of new node or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int p;
	listint_t *added;
	listint_t *q;

	q = *head;

	if (idx != 0)
	{
		for (p = 0; p < idx - 1 && q != NULL; p++)
		{
			q = q->next;
		}
	}
	if (q == NULL && idx != 0)
		return (NULL);
	added = malloc(sizeof(listint_t));
	if (added == NULL)
		return (NULL);
	added->n = n;
	if (idx == 0)
	{
		added->next = *head;
		*head = added;
	}
	else
	{
		added->next = q->next;
		q->next = added;
	}
	return (added);
}

