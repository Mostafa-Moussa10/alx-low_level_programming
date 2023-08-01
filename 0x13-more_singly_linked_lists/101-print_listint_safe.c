#include "lists.h"

/**
 * print_listint_safe - function to print all element of a list
 * @h: header of the linked list
 * Return: the size of linked list (number of nodes)
 */


size_t print_listint_safe(const listint_t *h)
{
	size_t count = 0;
	const listint_t *s = h;

	if (!h)
		exit(98);

	while (s)
	{
		printf("[%p] %d\n",(void*)s->next, s->n);
		s = s->next;
		count++;
	}
	return (count);
}

