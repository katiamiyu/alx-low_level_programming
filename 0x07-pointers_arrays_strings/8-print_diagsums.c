#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print disgonal numbers
 *
 * @a: array numbers
 * @size: size of array
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum = 0;
	int total = 0;
	int x;

	for (x = 0; x < size; x++)
		sum = sum + a[x * size + x];

	for (x = size - 1; x >= 0; x--)
		total += a[x * size + (size - x - 1)];

	printf("%d, %d\n", sum, total);

}
