#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: the position of the node to be returned
 *
 * Return: pointer to the node we are in search of, or NULL if it doesnt exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (index == 0 && head)
		return (head);

	for (i = 0; head && i < index; i++)
		head = head->next;

	if (head)
		return (head);
	return (NULL);
}
