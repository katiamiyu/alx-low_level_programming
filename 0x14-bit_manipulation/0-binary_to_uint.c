#include "main.h"
/**
 * binary_to_uint - binary to  unsigned int
 * @b: array of char
 * Return: binary result
 */
unsigned int binary_to_uint(const char *b)
{
	int count;
	unsigned int val = 0;

	if (b == NULL)
		return (0);

	for (count = 0; b[count]; count++)
	{
		if (b[count] < '0' || b[count] > '1')
			return (0);
		val = 2 * val + (b[count] - '0');
	}
	return (val);
}
