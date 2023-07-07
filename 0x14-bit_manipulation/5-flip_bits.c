#include "main.h"
/**
 * flip_bits - gets number of bits to change
 * @n: int value 1
 * @m: int value 2
 * Return: count of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, count = 0;
	unsigned long int recent;
	unsigned long int exor = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		recent = exor >> x;
		if (recent & 1)
			count++;
	}

	return (count);
}
