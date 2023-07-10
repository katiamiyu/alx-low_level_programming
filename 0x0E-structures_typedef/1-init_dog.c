#include <stdlib.h>
#include "dog.h"
#include "main.h"
/**
 * init_dog - allocates memory for a dog record
 *
 * @d: pointer to initialize dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
