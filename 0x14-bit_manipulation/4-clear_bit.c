#include "main.h"
/**
 * clear_bit - set bit to 0
 * @n: int to convert
 * @index: index of bit
 * Return: Always 1 (success), -1 (fail)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);

	return (1);
}
