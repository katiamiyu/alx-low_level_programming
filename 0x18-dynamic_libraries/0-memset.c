#include "main.h"
/**
 * _memset - a function to fill an array
 * @s: the array to be fiiled
 * @b: the character to be fill
 * @n: the number of byte to be filled
 * Return: char pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i <= n - 1; i++)
	{
		s[i] = b;
	}
	return (s);
}
