#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function to allocate a memory
 *
 * @b: size of memory
 *
 * Return: pointer to the memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}


