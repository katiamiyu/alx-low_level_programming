#include "main.h"
/**
 * set_bit - sets bit to 1
 * @n: decimal number
 * @index: bit index
 * Return: Always 1 (success), -1 (fails)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
