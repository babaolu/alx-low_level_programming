#include "lists.h"

/**
 * sum_dlistint - Sums all data in a dlistint_t list
 * @head: head of dlistint_t list
 *
 * Return: Sum of data
 * 0 if listint_t list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int addup = 0;
	if (!head)
		return (0);
	while (head)
	{
		addup += head->n;
		head = head->next;
	}
	return (addup);
}
