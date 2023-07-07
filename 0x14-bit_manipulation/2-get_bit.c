#include "main.h"
/**
 * get_bit - returns the index of a bit
 * @n: int number
 * @index: index of the bit
 * Return: index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int _bit;

	if (index > 63)
		return (-1);

	_bit = (n >> index) & 1;

	return (_bit);
}
