#include "lists.h"

/**
 * add_node - adds anew node at the beginning of the list
 * @head: beginning of the list
 * @str: store list
 * Return: address of head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;
	size_t new_char;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);
	for (new_char = 0; str[new_char]; new_char++)
		;
	add->len = new_char;
	add->next = *head;
	*head = add;

	return (*head);
}
