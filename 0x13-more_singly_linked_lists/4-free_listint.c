#include "lists.h"

/**
 * free_listint - frees listint
 * @head: points to the begining of the list
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *now_memory;

	while ((now_memory = head) != NULL)
	{
		head = head->next;
		free(now_memory);
	}
}
