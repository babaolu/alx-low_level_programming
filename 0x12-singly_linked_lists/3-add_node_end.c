#include "lists.h"

/**
 * add_node_end - Add new node to end of list
 * @head: Pointer to list_t
 * @str: String for initialization
 *
 * Return: Address of the new element
 * NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *fhead = *head;
	size_t len = 0;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);

	if (str)
	{
		new->str = strdup(str);
		while (*str)
		{
			len++;
			str++;
		}
	}
	new->len = len;
	new->next = NULL;

	if (!fhead)
		*head = new;
	else
	{
		while (fhead->next)
			fhead = fhead->next;
		fhead->next = new;
	}

	return (new);
}
