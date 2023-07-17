#include "dog.h"

/**
 * new_dog - function to add new data
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 * Return: pointer to  new data
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}

