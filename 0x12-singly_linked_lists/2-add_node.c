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
	s = malloc(sizeof(list_t));
	s->str = strdup(str);
	s->next = *head;
	head = &s;
	
	return (s);
}
