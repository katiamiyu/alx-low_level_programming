#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers.
 *
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: array || NULL
 */
int *array_range(int min, int max)
{
	int *ptr;
	int x;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(*ptr) * ((max - min) + 1));

	if (ptr == NULL)
		return (NULL);

	for (x = 0; min <= max; x++, min++)
		ptr[x] = min;

	return (ptr);
}
