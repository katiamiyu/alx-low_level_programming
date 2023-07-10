#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints n elements of an array
 *
 * @a: array parameter
 * @n: is the number to be printed
 *
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d", a[n - 1]);
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}

