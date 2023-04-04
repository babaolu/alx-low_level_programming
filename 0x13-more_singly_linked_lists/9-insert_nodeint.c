#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @phead: Pointer to head ot the listint_t
 * @idx: Index to insert into
 * @n: The n-value the node to be inserted should have
 *
 * Return: The address of the new node
 * NULL if failure occurs
 */
listint_t *insert_nodeint_at_index(listint_t **phead, unsigned int idx, int n)
{
	listint_t *head = *phead, *node;
	unsigned int iter = 0;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);

	for (iter = 0; iter < (idx - 1); iter++)
	{
		if (!head)
			return (NULL);
		head = head->next;
	}
	if (!head)
		return (NULL);
	node->n = n;
	node->next = head->next;
	head->next = node;

	return (node);
}
