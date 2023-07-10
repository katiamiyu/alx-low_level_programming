#include <stdio.h>
#include <stdlib.h>
/**
 * action - function to show input
 *
 * @num: integer parameter
 *
 * Return: void
 */
void action(int num)
{
	printf("%d\n", num * num);
}
/**
 * array_iterator - iterates through members of array
 *
 * @array: integer array
 * @size: length of array
 * @action: callback function
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x = 0;

	if (array == NULL || action == NULL)
		return;

	while (x < size)
	{
		action(array[x]);
		x++;
	}
}
