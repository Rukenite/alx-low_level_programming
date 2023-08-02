#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: integer data type to be inserted in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_N;
	listint_t *temp = *head;

	new_N = malloc(sizeof(listint_t));
	if (!new_N)
		return (NULL);

	new_N->n = n;
	new_N->next = NULL;

	if (*head == NULL)
	{
		*head = new_N;
		return (new_N);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_N;

	return (new_N);
}

