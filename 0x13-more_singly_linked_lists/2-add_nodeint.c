#include "lists.h"

/**
 * add_nodeint - Add new node to beginning of list
 * @head: Pointer to list_t
 * @n: Int for initialization
 *
 * Return: Address of the new element
 * NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
