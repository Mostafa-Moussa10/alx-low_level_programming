#include "lists.h"

/**
 * listint_len - function to get size of a list
 * @h: header of the linked list
 * Return: the size of linked list (number of nodes)
 */


size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *s;

	s = h;

	while (s)
	{
		s = s->next;
		count++;
	}
	return (count);
}

