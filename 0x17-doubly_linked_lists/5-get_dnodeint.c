#include "lists.h"

/**
 * get_dnodeint_at_index - Finds  the nth node of a dlistint_t list
 * @head: Head node of dlistint_t list
 * @index: Indes of the node
 *
 * Return: The node a index
 * NULL if node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int iter;

	for (iter = 0; iter < index; iter++)
	{
		if (!head)
			return (NULL);
		head = head->next;
	}
	return (head);
}
