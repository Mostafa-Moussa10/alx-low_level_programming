#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function to print dog info
 * @d: pointer to struct dog
 */

void print_dog(struct dog *d)
{
	printf("name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);

}
