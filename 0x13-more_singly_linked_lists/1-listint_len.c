#include "lists.h"

/**
 * listint_len - Evaluates number of elements in a linked list
 * @h: Linked list
 *
 * Return: Number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
