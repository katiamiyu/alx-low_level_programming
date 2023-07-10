#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - deallocate dog in mem9ry
 *
 * @d: remove dog struct in memory
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
