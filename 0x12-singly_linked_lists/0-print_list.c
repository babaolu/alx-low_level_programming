#include "lists.h"

/**
 * print_list - Prints all elements in a list_t list
 * @h: list_t list
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *head = h;
	char *str;
	size_t len = 0, flen;

	if (!head)
		return (0);
	do {
		flen = 0;
		str = head->str;
		if (str)
			while (*str)
			{
				flen++;
				str++;
			}
		printf("[%lu] %s\n", flen, head->str);
		len++;
		head = head->next;
	} while (head);

	return (len);
}
