#include "lists.h"

/**
 * print_listint - Prints all elements in a list_t list
 * @h: listint_t list
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *head = h;
	size_t len = 0;

	if (!head)
		return (0);
	do {
		printf("%i\n", head->n);
		len++;
		head = head->next;
	} while (head);

	return (len);
}
