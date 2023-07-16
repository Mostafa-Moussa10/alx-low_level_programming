#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function to allocate a memory
 *
 * @b: size of memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		return ((void *)98);

	return (p);
}


