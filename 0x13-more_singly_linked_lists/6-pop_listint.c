#include "lists.h"

/**
 * pop_listint - Deletes and returns head node of listint_t
 * @phead: the list
 *
 * Return: Data of popped head
 */
int pop_listint(listint_t **phead)
{
	listint_t *head = *phead;
	int popvalue = 0;

	if (!head)
		return (popvalue);

	popvalue = head->n;
	*phead = head->next;
	free(head);

	return (popvalue);
}
