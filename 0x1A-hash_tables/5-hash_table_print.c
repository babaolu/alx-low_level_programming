#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table to print
 *
 * Return: Void (Nothing)
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **root;
	unsigned long int iter, pre_list = 0;

	if (!ht)
		return;

	root = ht->array;
	printf("{");
	for (iter = 0; iter < ht->size; iter++)
	{
		if (root[iter])
			pre_list = 1;
		print_list(root[iter]);
		if (pre_list && root[iter + 1])
			printf(", ");
	}
	puts("}");
}

/**
 * print_list - Prints all elements in a hash_node_t list
 * @h: hash_node_t list
 *
 * Return: Void (Nothing)
 */
void print_list(const hash_node_t *h)
{
	const hash_node_t *head = h;

	if (!head)
		return;
	while (head)
	{
		printf("'%s': '%s'", head->key, head->value);

		head = head->next;
		if (head)
			printf(", ");
	}

}
