#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function to clear the data of dogs
 * @d: pointer to the dog data
 */

void free_dog(dog_t *d)
{
	if (d)
		free(d);

}


