#include "lists.h"

/**
 * sum_listint - Evaluates the sum of all data(n) of a listint_t
 * @h: Linked list, listint_t
 *
 * Return: Sum of all data(n) in the linked list
 */
int sum_listint(listint_t *h)
{
	int sum = 0;

	while (h)
	{
		sum += h->n;
		h = h->next;
	}

	return (sum);
}
