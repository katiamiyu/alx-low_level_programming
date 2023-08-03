#include "main.h"
/**
 * set_bit - sets bit to 1
 * @n: int value
 * @index: bit index
 * Return: Always(success) 1, (fails) -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
