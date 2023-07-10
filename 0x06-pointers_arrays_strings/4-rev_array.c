#include "main.h"
/**
 * reverse_array - reverse array of integer
 *
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x;
	int z;

	for (x = 0; x < n--; x++)
	{
		z = a[x];
		a[x] = a[n];
		a[n] = z;
	}
}
