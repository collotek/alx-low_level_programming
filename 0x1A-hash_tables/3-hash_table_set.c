#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: pointer to the hash table.
 * @key: key to be added - not an empty string.
 * @value: value for a key.
 *
 * Return: failure - 0.
 *         success - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *value_copy;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	copy_of_value = strdup(value);
	if (copy_of_value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = copy_of_value;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_copy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = copy_of_value;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
