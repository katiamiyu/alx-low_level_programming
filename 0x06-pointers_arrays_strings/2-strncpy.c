#include "main.h"
/**
 * _strncpy - function copies string to another var
 *
 * @dest: destination var
 * @src: source var
 * @n: number of char to copy
 *
 * Return: void
 */
char *_strncpy(char *dest, char *src, int n)
{
	int s = 0;

	while ((n > s) && (src[s] != '\0'))
	{
		dest[s] = src[s];
		s++;
	}
	while (n > s)
	{
		dest[s] = '\0';
		s++;
	}

	return (dest);
}
