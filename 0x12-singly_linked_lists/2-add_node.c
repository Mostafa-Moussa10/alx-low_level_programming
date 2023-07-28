#include "lists.h"
#include <string.h>

/**
 * add_node - function to add node to the linked list
 * @head: head of linked list
 * @str: data of node
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *s;
	unsigned int len = strlen(str);

	s = malloc(sizeof(list_t));
	if (s == NULL)
		return (NULL);

	s->str = strdup(str);
	s->len = len;
	s->next = *head;
	*head = s;

	return (s);
}
