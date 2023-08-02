#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: linked list of type listint_t is to be tranversed
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t numeric = 0;

	while (h != NULL)
	{
		numeric++;
		h = h->next;
	}

	return (numeric);
}

