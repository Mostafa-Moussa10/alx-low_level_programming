#include "lists.h"

/**
 * pop_listint - function to delete the head node of a list
 * @head: pointer to the header of the list
 * Return: the head node's data (n)
 */

int pop_listint(listint_t **head)
{
	int x = 0;

	if (*head == NULL)
		return (0);

	x = (*head)->n;
	free(*head);
	return (x);
}

