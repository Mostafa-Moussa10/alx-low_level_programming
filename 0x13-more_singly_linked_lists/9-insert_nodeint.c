#include "lists.h"

/**
 * insert_nodeint_at_index - function to insert node in at position index
 * @head: pointer to list header
 * @idx: position of inserted node
 * @n: data
 * Return: the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *previous;
	unsigned int i = 0;

	if (!head || !*head)
		return (NULL);

	current = *head;

	if (idx == 0)
	{
		previous = malloc(sizeof(listint_t));
		if (!previous)
			return (NULL);
		previous->n = n;
		previous->next = *head;
		*head = previous;
	}


	while (i < idx - 1)
	{
		i++;
		current = current->next;
		if (!current)
			return (NULL);
	}
	previous = malloc(sizeof(listint_t));
	if (!previous)
		return (NULL);
	previous->n = n;
	previous->next = current->next;
	current->next = previous;

	return (previous);
}
