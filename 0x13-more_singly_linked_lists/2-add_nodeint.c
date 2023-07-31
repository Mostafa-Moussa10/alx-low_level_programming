#include "lists.h"

/**
 * add_nodeint - function to add element in the beginning of a list
 * @head: pointer to the list header
 * @n: data to be added
 * Return: the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *s;
	
	s = *head;
	s = malloc(sizeof(listint_t));
	if (!s)
	{
		return (NULL);
	}

	s->n = n;
	s->next = *head;
	*head = s;
	return (s);
}
