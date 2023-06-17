#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given index
 * @h: head of dlistint_t list
 * @idx: Index to insert new node
 * @n: Data to be carried by new node
 *
 * Return: Address of new node
 * NULL if operation fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head = *h, *new, *right;
	unsigned int iter;

	if (!h)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (head)
	{
		for (iter = 0; iter < idx - 1; iter++)
		{
			if (!(head->next))
				return (NULL);
			head = head->next;
		}
		if (!(head->next))
			return (add_dnodeint_end(&head, n));
		new = malloc(sizeof(*new));
		if (!new)
			return (NULL);
		right = head->next;
		new->n = n;
		head->next = new;
		new->prev = head;
		new->next = right;
		right->prev = new;
		return (new);
	}
	return (NULL);
}
