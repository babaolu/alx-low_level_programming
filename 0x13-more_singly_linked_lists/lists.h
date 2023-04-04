#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Singly linked list
 * @n: Integer
 * @next: Points to the next node
 *
 * Description: Singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *);

size_t listint_len(const listint_t *);

listint_t *add_nodeint(listint_t **, const int);

listint_t *add_nodeint_end(listint_t **, const int);

#endif /* LISTS_H */
