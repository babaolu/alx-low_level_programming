#include "lists.h"

/**
 * free_list - Frees all memories in list_t
 * @head: list_t to free
 *
 * Return: Void (Nothing)
 */
void free_list(list_t *head)
{
	list_t *fhead;

	while (head)
	{
		fhead = head->next;
		free(head->str);
		free(head);
		head = fhead;
	}
}
