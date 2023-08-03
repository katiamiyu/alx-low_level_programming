#include "main.h"
/**
 * get_bit - gets the index of a bit
 * @n: int value
 * @index: bit index
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
