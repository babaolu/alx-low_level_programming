#include "lists.h"

/**
 * list_len - Evaluates number of elements in a linked list
 * @h: Linked list
 *
 * Return: Number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
