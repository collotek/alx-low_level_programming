#include "lists.h"

/**
 * pop_listint - deletes the head node data
 * @head: head of a list
 * Return: heads node data
 */
int pop_listint(listint_t **head)
{
	int start_node;
	listint_t *h;
	listint_t *memory;

	if (*head == NULL)
		return (0);
	memory = *head;
	start_node = memory->n;
	h = memory->next;
	free(memory);
	*head = h;
	return (start_node);
}
