#include "hash_tables.h"
/**
 * shash_table_create - Creates a new hash table (shash_table_t)
 * @size: Size of the hash table
 *
 * Return: Newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;

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
	memset(new_table->array, 0, sizeof(*(new_table->array)) * size);

	new_table->shead = NULL;
	new_table->stail = NULL;
	return (new_table);
}

/**
 * shash_table_set - Adds an element to a hash table
 * @ht: The hash table to add to
 * @key: Key used to hash
 * @value: Value of the key/value pair
 *
 * Return: 1 if operation is successful
 * 0 if failure occurs
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hashed_index;
	shash_node_t *id_node = NULL;

	if (!ht)
		return (0);
	if (!(key && value))
		return (0);
	if (!key[0])
		return (0);

	hashed_index = key_index((const unsigned char *) key, ht->size);
	id_node = add_snode(ht, hashed_index, key, value);
	if (id_node)
		return (1);
	return (0);
}

/**
 * shash_table_get - Retrieves a value associated with a key
 * @ht: The hash table to traverse
 * @key: Key used to hash
 *
 * Return: Value associated with the element
 * NULL if the key is not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int hashed_index;
	shash_node_t *head = NULL;
	shash_node_t *key_node = NULL;

	if (!ht)
		return (NULL);
	if (!key || !key[0])
		return (NULL);

	hashed_index = key_index((const unsigned char *) key, ht->size);
	head = (ht->array)[hashed_index];
	key_node = skey_search(head, key);
	if (key_node)
		return (key_node->value);
	return (NULL);
}

/**
 * shash_table_print - Prints a hash table
 * @ht: The hash table to print
 *
 * Return: Void (Nothing)
 */
void shash_table_print(const shash_table_t *ht)
{
	if (!ht)
		return;

	putchar('{');
	print_slist(ht->shead);
	puts("}");
}

/**
 * shash_table_print_rev - Prints a hash table in reverse
 * @ht: The hash table to print
 *
 * Return: Void (Nothing)
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	if (!ht)
		return;

	putchar('{');
	print_slist_rev(ht->stail);
	puts("}");
}

/**
 * shash_table_delete - Deletes a hash table (of type hash_table_t)
 * @ht: The hash_table to delete
 *
 * Return: Void (Nothing)
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t **root = ht->array;
	unsigned long int iter;

	if (!ht)
		return;
	for (iter = 0; iter < ht->size; iter++)
	{
		if (root[iter])
		{
			free_snode(root[iter]);
			root[iter] = NULL;
		}
	}
	free(ht->array);
	free(ht);
}

/**
 * add_snode - Add new node to beginning of list
 * @head: Pointer to shash_node_t
 * @key: Key used to hashed
 * @value: Value of the key/value pair
 *
 * Return: Address of the new element
 * NULL if failed
 */
shash_node_t *add_snode(shash_table_t *ht, unsigned long int index,
			const char *key, const char *value)
{
	shash_node_t **head = ht->array + index;
	shash_node_t *new;
	shash_node_t *dup_key_node = NULL;

	dup_key_node = skey_search(*head, key);
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

	sort_link(ht, new);

	return (new);
}

/**
 * sort_link - Linking the nodes in an ordered list
 * @ht: Hash table
 * @new: New node to add
 *
 * Return: 1 on Success, 0 on failure
 */
int sort_link(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t **head = &(ht->shead), *h = *head;

	if (!head)
		return (0);
	if (!(*head))
	{
		new->sprev = NULL;
		new->snext = NULL;
		*head = new;
		ht->stail = new;
		return (1);
	}

	while (h->snext)
	{
		if (strcmp(h->key, new->key) < 0)
		{
			h = h->snext;
			continue;
		}
		if (*head == h)
			*head = new;
		else
			(h->sprev)->snext = new;
		new->sprev = h->sprev;
		new->snext = h;
		h->sprev = new;
		return (1);
	}
	if (strcmp(h->key, new->key) < 0)
	{
		h->snext = new;
		new->sprev = h;
		new->snext = NULL;
		ht->stail = new;
		return (1);
	}
	if (*head == h)
		*head = new;
	else
		(h->sprev)->snext = new;
	new->sprev = h->sprev;
	new->snext = h;
	h->sprev = new;
	return (1);
}

/**
 * skey_search - Searches for key duplicate at the hashed index
 * @start: Starting hash node of the linked list
 * @key: The key to compare
 *
 * Return: The duplicate node if found
 * NULL if no duplicate key exists
 */
shash_node_t *skey_search(shash_node_t *start, const char *key)
{
	while (start)
	{
		if (!strcmp(key, start->key))
			return (start);
		start = start->next;
	}
	return (NULL);
}

/**
 * print_slist - Prints all elements in a hash_node_t list
 * @head: hash_node_t list
 *
 * Return: Void (Nothing)
 */
void print_slist(const shash_node_t *head)
{
	if (!head)
		return;
	while (head)
	{
		printf("'%s': '%s'", head->key, head->value);

		head = head->snext;
		if (head)
			printf(", ");
	}

}

/**
 * print_slist_rev - Prints all elements in a hash_node_t list in reverse
 * @head: hash_node_t list
 *
 * Return: Void (Nothing)
 */
void print_slist_rev(const shash_node_t *tail)
{
	if (!tail)
		return;
	while (tail)
	{
		printf("'%s': '%s'", tail->key, tail->value);

		tail = tail->sprev;
		if (tail)
			printf(", ");
	}

}

/**
 * free_snode - Frees all memories in shash_node_t
 * @head: shash_node_t to free
 *
 * Return: Void (Nothing)
 */
void free_snode(shash_node_t *head)
{
	shash_node_t *fhead;

	while (head)
	{
		fhead = head->next;
		free(head->key);
		free(head->value);
		free(head);
		head = fhead;
	}
}
