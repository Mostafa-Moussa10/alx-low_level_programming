#include "lists.h"

/**
 * add_nodeint_end - function to add a new element at end of list
 * @head: pointer to the head of the linked list
 * @n: data of element
 * Return: address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *s = *head;
	listint_t *p;

	p = malloc(sizeof(listint_t));
	if (!p)
		return (NULL);

	while (s->next)
	{
		s = s->next;
	}
	p->n = n;
	s->next = p;
	p->next = NULL;
	return (p);
}


