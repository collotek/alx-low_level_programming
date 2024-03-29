#include "hash_tables.h"

/**
 * key_index - index at which a keypair should 
 * 	be stored in array of a hash table.
 *
 * @key: The key to get the index of.
 * @size: The size of the array of the hash table.
 *
 * Return: The key index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
