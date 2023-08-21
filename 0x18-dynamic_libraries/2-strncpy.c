#include "main.h"
/**
 * _strncpy - a function
 * @dest: dest str
 * @src: src string
 * @n: the nuber of char to copy
 * Return: success (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
