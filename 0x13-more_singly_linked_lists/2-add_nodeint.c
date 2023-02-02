#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a list
 * @head: end of a list
 * @n: integer
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_node;
	listint_t *current;

	(void)current;

	add_node = malloc(sizeof(listint_t));

	if (add_node == NULL)
		return (NULL);
	add_node->n = n;
	add_node->next = NULL;
	current = *head;
	if (*head == NULL)
	{
		*head = add_node;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = add_node;
	}

	return (*head);
}
