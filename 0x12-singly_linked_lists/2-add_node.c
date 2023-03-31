#include "lists.h"

/**
 * add_node - Add new node to beginning of list
 * @head: Pointer to list_t
 * @str: String for initialization
 *
 * Return: Addrss of the new element
 * NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t len = 0;

	new = malloc(sizeof(*new));
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
	new->next = *head;
	*head = new;

	return (new);
}
