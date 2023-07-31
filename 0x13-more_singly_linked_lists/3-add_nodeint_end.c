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

	p->n = n;
	p->next = NULL;
	if (*head == NULL)
	{
		*head = p;
		return (p);
	}

	while (s->next)
		s = s->next;
	
	s->next = p;

	return (p);
}


