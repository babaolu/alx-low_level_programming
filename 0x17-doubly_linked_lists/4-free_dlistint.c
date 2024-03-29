#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: head of dlistint_t list
 *
 * Return: Void (Nothing)
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	while (head)
	{
		curr = head->next;
		free(head);
		head = curr;
	}
}
