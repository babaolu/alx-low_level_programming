#include "lists.h"

/**
 * free_listint - Frees all memories in listint_t
 * @head: listint_t to free
 *
 * Return: Void (Nothing)
 */
void free_listint(listint_t *head)
{
	listint_t *fhead;

	while (head)
	{
		fhead = head->next;
		free(head);
		head = fhead;
	}
}
