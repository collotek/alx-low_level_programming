#include "lists.h"

/**
 * free_listint2 - frees listintt
 * @head: start of the list
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *now_memory;
	listint_t *then_mem;

	if (head != NULL)
	{
		then_mem = *head;
		while ((now_memory = then_mem) != NULL)
		{
			then_mem = then_mem->next;
			free(now_memory);
		}
		*head = NULL;
	}
}
