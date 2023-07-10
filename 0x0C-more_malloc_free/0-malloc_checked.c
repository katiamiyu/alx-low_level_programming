#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - make memory space and checks if it fails
 *
 * @b: number of bytes to allocated
 *
 * Return: a pointer to the allocated memory or 98 if malloc fails.
 */
void *malloc_checked(unsigned int b)
{
	char *str;

	str = malloc(b);

	if (str == NULL)
		exit(98);
	return (str);
}
