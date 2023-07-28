#include "lists.h"
#include <string.h>

/**
 * add_node_end - function to add node to end of linked list
 * @head: pointer to the linked list
 * @str: data of the list
 * Return: the address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *s;
	list_t *current;
	unsigned int len = strlen(str);


	s = malloc(sizeof(list_t));
	if (!s)
		return (NULL);

	s->str = strdup(str);
	s->len = len;
	s->next = NULL;

	if (*head == NULL)
	{
		*head = s;
		return (s);
	}

	current = *head;
	while (current->next)
		current = current->next;

	current->next = s;
	return (s);
}

