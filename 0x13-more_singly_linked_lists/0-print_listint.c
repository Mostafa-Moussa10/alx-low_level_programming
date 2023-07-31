#include "lists.h"

/**
 * print_listint - function to print all element of a list
 * @h: header of the linked list
 * Return: the size of linked list (number of nodes)
 */


size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *s;

	s = h;

	while (s)
	{
		printf("%d\n", s->n);
		s = s->next;
		count++;
	}
	return (count);
}

