#include "lists.h"

/**
 * free_listint_safe - this is used to free a linked list
 * @h: this is a pointer to the first node in a linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int sep;
	listint_t *tempo;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		sep = *h - (*h)->next;
		if (sep > 0)
		{
			tempo = (*h)->next;
			free(*h);
			*h = tempo;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
