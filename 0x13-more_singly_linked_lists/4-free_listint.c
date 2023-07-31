#include "lists.h"

/**
 * free_listint - function to clear the linked list
 * @head: poitner to header of linked list
 */

void free_listint(listint_t *head)
{
	listint_t *s;

	while (head)
	{
		s = head;
		free(headd);
		head = s->next;
	}

}
