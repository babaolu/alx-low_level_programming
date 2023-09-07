#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to a hash table
 * @ht: The hash table to add to
 * @key: Key used to hash
 * @value: Value of the key/value pair
 *
 * Return: 1 if operation is successful
 * 0 if failure occurs
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hashed_index;
	hash_node_t *id_node = NULL;

	if (!(key && value))
		return (0);
	if (!key[0])
		return (0);

	hashed_index = key_index((const unsigned char *) key, ht->size);
	id_node = add_node(ht->array + hashed_index, key, value);
	if (id_node)
		return (1);
	return (0);
}

/**
 * add_node - Add new node to beginning of list
 * @head: Pointer to hash_node_t
 * @key: Key used to hashed
 * @value: Value of the key/value pair
 *
 * Return: Address of the new element
 * NULL if failed
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new;
	hash_node_t *dup_key_node = NULL;

	dup_key_node = key_search(*head, key);
	if (dup_key_node)
	{
		if (strcmp(dup_key_node->value, value))
		{
			free(dup_key_node->value);
			dup_key_node->value = strdup(value);
		}
		return (dup_key_node);
	}

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);

	new->key = strdup(key);
	new->value = strdup(value);

	new->next = *head;
	*head = new;

	return (new);
}

/**
 * key_search - Searches for key duplicate at the hashed index
 * @start: Starting hash node of the linked list
 * @key: The key to compare
 *
 * Return: The duplicate node if found
 * NULL if no duplicate key exists
 */
hash_node_t *key_search(hash_node_t *start, const char *key)
{
	while (start)
	{
		if (!strcmp(key, start->key))
			return (start);
		start = start->next;
	}
	return (NULL);
}
