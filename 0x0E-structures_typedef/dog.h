#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct for dog data
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedeg og struct dog
 */

typedef struct dog dog_t;

/*function declaeration*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

