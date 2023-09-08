#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: The hash table to traverse
 * @key: Key used to hash
 *
 * Return: Value associated with the element
 * NULL if the key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hashed_index;
	hash_node_t *head = NULL;
	hash_node_t *key_node = NULL;

	if (!ht)
		return (NULL);
	if (!key || !key[0])
		return (NULL);

	hashed_index = key_index((const unsigned char *) key, ht->size);
	head = (ht->array)[hashed_index];
	key_node = key_search(head, key);
	if (key_node)
		return (key_node->value);
	return (NULL);
}
