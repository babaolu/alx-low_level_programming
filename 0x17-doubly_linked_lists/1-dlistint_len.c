#include "lists.h"

/**
 * dlistint_len - Evaluates number of elements in dlistint_t list
 * @h: head of dlistint_t list
 *
 * Return: Number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while(h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
