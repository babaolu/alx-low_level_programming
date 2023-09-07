#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table (hash_table_t)
 * @size: Size of the hash table
 *
 * Return: Newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	new_table = malloc(sizeof(*new_table));
	if (!new_table)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(sizeof(*(new_table->array)) * size);
	if (!(new_table->array))
	{
		free(new_table);
		return (NULL);
	}
	return (new_table);
}
