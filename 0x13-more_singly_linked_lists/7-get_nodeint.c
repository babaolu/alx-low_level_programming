#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t
 * @head: head of listint_t
 * @index: Node index
 *
 * Return: Nth node
 * NULL is node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int iter = 0;
	listint_t *fhead = head;

	for (iter = 0; iter < index; iter++)
	{
		if (!fhead)
			break;
		fhead = fhead->next;
	}
	return (fhead);
}
