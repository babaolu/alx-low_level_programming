#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the list
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int);

unsigned long int hash_djb2(const unsigned char *);

unsigned long int key_index(const unsigned char *, unsigned long int);

int hash_table_set(hash_table_t *, const char *, const char *);

char *hash_table_get(const hash_table_t *, const char *);

hash_node_t *add_node(hash_node_t **, const char *, const char *);

hash_node_t *key_search(hash_node_t *, const char *);

void hash_table_print(const hash_table_t *);

void print_list(const hash_node_t *);

#endif /* HASH_TABLE_H */
