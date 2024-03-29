#include "lists.h"

/**
 * print_dlistint - Prints all the elements of dlistint_t list
 * @h: head of dlistint_t list
 *
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
