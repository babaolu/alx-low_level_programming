#include "lists.h"

/**
 * free_listint2 - Frees all memories in listint_t
 * @phead: pointer to listint_t to free
 *
 * Return: Void (Nothing)
 */
void free_listint2(listint_t **phead)
{
	listint_t *fhead, *head = NULL;

	if (phead)
		head = *phead;
	while (head)
	{
		fhead = head->next;
		free(head);
		head = fhead;
	}
	*phead = NULL;
}
