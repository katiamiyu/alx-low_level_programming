#include "main.h"
/**
 * _memset - replace chars in a block of chars
 *
 * @s: block of char
 * @b: replacement char
 * @n: number of chars to be replaced
 *
 * Return: updated array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x;

	for (x = 0; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
