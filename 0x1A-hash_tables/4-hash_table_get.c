#include "hash_tables.h"

/**
i * hash_table_get - Retrieves value associated with
 *                  a key
 * @ht: hash table pointer.
 * @key: The key sought for.
 *
 * Return: If key is not matched - NULL.
 *         Else - value associated with the element.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
