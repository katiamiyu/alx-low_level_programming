#include "main.h"
/**
 * swap_int - swaps the values of its pointer inputs
 *
 * @a: first int pointer value
 * @b: second int pointer value
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
