#include "main.h"
/**
 * _memcpy - copy mem areas
 * @dest: destination array
 * @src: source array
 * @n: number of byte tocopy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n - 1; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
