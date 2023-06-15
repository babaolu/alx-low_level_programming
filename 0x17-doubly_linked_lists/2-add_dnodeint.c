#include "lists.h"

/**
 * add_dnodeint - Adds new node at the beginning of dlistint_t list
 * @head: head of the dlistint_t list
 * @n: Value the new node will carry
 *
 * Return: Address of new element
 * NULL if operation fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);
	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	(*head)->prev = new;
	*head = new;

	return (new);
}
