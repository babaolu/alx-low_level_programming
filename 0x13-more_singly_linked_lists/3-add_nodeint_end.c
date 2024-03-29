#include "lists.h"

/**
 * add_nodeint_end - Add new node to end of list
 * @head: Pointer to list_t
 * @n: Int for initialization
 *
 * Return: Address of the new element
 * NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *fhead = *head;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!fhead)
		*head = new;
	else
	{
		while (fhead->next)
			fhead = fhead->next;
		fhead->next = new;
	}

	return (new);
}
