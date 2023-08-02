#include "lists.h"

/**
 * sum_listint - sums all the data in a listint_t list
 * @head: the first node in the linked list
 *
 * Return: the sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tempo = head;

	while (tempo)
	{
		sum += tempo->n;
		temp = tempo->next;
	}

	return (sum);
}
