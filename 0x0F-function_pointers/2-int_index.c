#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - search through for an integer
 *
 * @array: points to array in memory
 * @size: size of array
 * @cmp: call back function
 *
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL ||  cmp == NULL || size <= 0)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}

	return (-1);
}
