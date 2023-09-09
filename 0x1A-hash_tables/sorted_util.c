#include "hash_tables.h"

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

	sort_link(&(ht->shead), new);

	return (new);
}

/**
 * sort_link - Linking the nodes in an ordered list
 * @head: Head of the ordered list
 * @new: New node to add
 *
 * Return: 1 on Success, 0 on failure
 */
int sort_link(shash_node_t **head, shash_node_t *new)
{
	shash_node_t *h = *head;

	if (!head)
		return (0);
	if (!(*head))
	{
		new->sprev = NULL;
		new->snext = NULL;
		*head = new;
		return (1);
	}

	while (h->snext)
	{
		if (strcmp(h->key, new->key) < 0)
		{
			h = h->snext;
			continue;
		}
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
		return (1);
	}
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
