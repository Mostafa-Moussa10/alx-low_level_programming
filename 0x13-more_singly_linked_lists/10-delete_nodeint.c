#include "lists.h"

/**
 * delete_nodeint_at_index - function to delete an element form list
 * @head: pointer to list header
 * @index: index of the data to be deleted
 * Return: 1 if succeeded, -1 if it failed
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *s = *head;
	int i = 0;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		*head = s->next;
		free(s);
		return (1);
	}

	while (i < index - 1)
	{
		s = s->next;
		if (!s)
			returtn(-1);
		i++;
	}

	s->next = s->next->next;
	s = s->next;
	free(s);

	return (1);
}

