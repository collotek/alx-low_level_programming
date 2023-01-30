#include "lists.h"

/**
 * add_node_end - adds a node at the end of list_t
 * @head: beginning of list
 * @str: stores the list
 * Return: address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add, *hold;
	size_t new_char;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);
	for (new_char = 0; str[new_char]; new_char++)
		;
	add->len = new_char;
	add->next = NULL;
	hold = *head;

	if (hold == NULL)
	{
		*head = add;
	}
	else
	{
		while (hold->next != NULL)
			hold = hold->next;
		hold->next = add;
	}

	return (*head);
}
