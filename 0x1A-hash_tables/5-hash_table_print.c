#include "hash_tables.h"

/**
 * hash_table_print - function to print hash table.
 * @ht: pointer hash table to be printed.
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int j;
	unsigned char flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (j = 0; j < ht->size; i++)
	{
		if (ht->array[j] != NULL)
		{
			if (flag == 1)
				printf(", ");

			node = ht->array[j];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}
