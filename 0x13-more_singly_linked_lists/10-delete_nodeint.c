#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at a given position
 * @phead: Pointer to head ot the listint_t
 * @index: Index at which to delete
 *
 * Return: 1 on success
 * -1 on failure
 */
int delete_nodeint_at_index(listint_t **phead, unsigned int index)
{
	listint_t *head = *phead, *node;
	unsigned int iter = 0;

	if (!head)
		return (-1);

	if (!index)
	{
		node = head;
		*phead = head->next;
		free(node);
		return (1);
	}

	for (iter = 0; iter < (index - 1); iter++)
	{
		head = head->next;
		if (!head)
			return (-1);
	}
	node = head->next;
	if (!node)
		return (-1);
	head->next = node->next;

	free(node);

	return (1);
}
