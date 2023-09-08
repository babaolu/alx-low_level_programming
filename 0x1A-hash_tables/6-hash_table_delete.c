#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table (of type hash_table_t)
 * @ht: The hash_table to delete
 *
 * Return: Void (Nothing)
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t **root = ht->array;
	unsigned long int iter;

	if (!ht)
		return;
	for (iter = 0; iter < ht->size; iter++)
	{
		if (root[iter])
		{
			free_node(root[iter]);
			root[iter] = NULL;
		}
	}
	free(ht->array);
	free(ht);
}

/**
 * free_node - Frees all memories in hash_node_t
 * @head: hash_node_t to free
 *
 * Return: Void (Nothing)
 */
void free_node(hash_node_t *head)
{
	hash_node_t *fhead;

	while (head)
	{
		fhead = head->next;
		free(head->key);
		free(head->value);
		free(head);
		head = fhead;
	}
}
