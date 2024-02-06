#include "search_algos.h"
/**
  * linear_search - Searches linnear array and prints result
  * @array: search array
  * @size: array size
  * @value: Value
  * Return: Returns the first index of the value
  */

int linear_search(int *array, size_t size, int value)
{
	int index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < (int) size; index++)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
		{
			return (index);
		}
	}
	return (-1);
}
