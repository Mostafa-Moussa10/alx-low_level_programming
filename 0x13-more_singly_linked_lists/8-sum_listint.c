#include "lists.h"

/**
 * sum_listint - function to get the sum of linked list data
 * @head: header of linked list
 * Return: sum of data
 */

int sum_listint(listint_t *head)
{
	listint_t *s = head;
	int sum = 0;

	if (!head)
		return (0);

	while (s)
	{
		sum += s->n;
		s = s->next;
	}
	return (sum);
}

