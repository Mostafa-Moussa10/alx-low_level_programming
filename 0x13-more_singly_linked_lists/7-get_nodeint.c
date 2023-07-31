#include "lists.h"

/**
 * get_nodeint_at_index - function to get an element in a list
 * @head: header of the list
 * @index: number of the node
 * Return: pointer to node of  number index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *s;
	unsigned int i = 0;

	s = head;

	while (i < index)
	{
		i++;
		s = s->next;
		if (s == NULL)
			return (NULL);
	}

	return (s);
}
