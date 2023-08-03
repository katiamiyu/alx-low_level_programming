#include "main.h"

/**
 * get_endianness - run machine check
 * Return: 0 (big), 1 (little)
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *s = (char *) &x;

	return (*s);
}

