#include "lists.h"

/**
 * free_listint2 - function to clear the linked list
 * @head: poitner to header of linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *s;

	while (*head)
	{
		s = (*head)->next;
		free(*head);
		(*head) = s;
	}
	head = NULL;
}
