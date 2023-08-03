#include "main.h"
/**
 * flip_bits - gets number of bits to convert
 * @n: int value
 * @m: int value
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, count = 0;
	unsigned long int present;
	unsigned long int exor = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		present = exor >> x;
		if (present & 1)
			count++;
	}

	return (count);
}
