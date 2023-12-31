#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: integer data to be inserted in the new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_N;

	new_N = malloc(sizeof(listint_t));
	if (!new_N)
		return (NULL);

	new_N->n = n;
	new_N->next = *head;
	*head = new_N;

	return (new_N);
}
