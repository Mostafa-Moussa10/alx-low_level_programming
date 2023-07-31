#include "lists.h"

/**
 * pop_listint - function to delete the head node of a list
 * @head: pointer to the header of the list
 * Return: the head node's data (n)
 */

int pop_listint(listint_t **head)
{
	int x = 0;
	listint_t *s;

	if (*head == NULL || head == NULL)
		return (0);

	s = (*head)->next;
	x = (*head)->n;
	free(*head);
	(*head) = s;
	return (x);
}

