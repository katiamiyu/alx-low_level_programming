#include "main.h"
/**
 * _memcpy - function copies memory area
 *
 * @dest: memory destinatiom
 * @src: memory sorce
 * *@n: number of bytes
 *
 * Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x, y = n;

	for (x = 0; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
