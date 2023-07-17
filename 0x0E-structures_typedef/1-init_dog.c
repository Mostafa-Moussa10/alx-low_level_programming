#include <stdio.h>
#include "dog.h"
#include <string.h>

/**
 * init_dog - function to initialize the dog info
 *
 * @d: pointer to struct dog
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;


}
