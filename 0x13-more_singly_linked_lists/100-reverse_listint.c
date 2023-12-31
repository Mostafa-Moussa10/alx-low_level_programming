#include "lists.h"

/**
 * reverse_listint - function to reverse a list
 * @head: pointer to list header
 * Return: pointer to the first node of reversed list
 */


listint_t *reverse_listint(listint_t **head)
{
	listint_t *s = *head;
	listint_t *p = (*head)->next;

	if (!head || !*head)
		return (NULL);

	(*head)->next = NULL;

	while (p)
	{
		s = p;
		p = p->next;
		s->next = *head;
		*head = s;
	}
	return (s);
}
