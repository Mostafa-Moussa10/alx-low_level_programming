#include "lists.h"
#include <string.h>

/**
 * free_list - function to free a linked list
 * @head: pointer to linked list
 */

void free_list(list_t *head)
{
	list_t *s;

	s = head;
	while (!s->next)
	{
		free(s->str);
		s = s->next;
		
		free(head);
		head = s;
	}
}

