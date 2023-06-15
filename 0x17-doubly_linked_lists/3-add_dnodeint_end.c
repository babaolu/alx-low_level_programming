#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: head of the dlistint_t list
 * @n: Value the new node will carry
 *
 * Return: Address of the new element
 * NULL if operation fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *h = *head;

	if (!head)
		return (NULL);
	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (h)
	{
		while (h->next)
		{
			h = h->next;
		}
		h->next = new;
		new->prev = h;
	}
	else
	{
		new->prev = NULL;
		*head = new;
	}

	return (new);
}
