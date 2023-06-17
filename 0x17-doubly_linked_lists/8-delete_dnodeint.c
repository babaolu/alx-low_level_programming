#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node at specified index
 * @head: Head of dlistint_t list
 * @index: Index of element to delete
 *
 * Return: 1 on success
 * -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int iter;
	dlistint_t *h = *head, *old;

	if (!head)
		return (-1);
	for (iter = 0; iter < index; iter++)
	{
		if (!h)
			return (-1);
		h = h->next;
	}
	if (!h)
		return (-1);
	old = h;
	if (old->prev)
		(old->prev)->next = old->next;
	else
		*head = old->next;
	if (old->next)
		(old->next)->prev = old->prev;
	free(old);
	return (1);
}
