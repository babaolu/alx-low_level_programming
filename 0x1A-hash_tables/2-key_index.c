#include "hash_tables.h"

/**
 * key_index - Returns the index of a key using a hash function
 * @key: The key for determining the index
 * @size: The size of the hash table
 *
 * Return: The index produced by the hash
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
