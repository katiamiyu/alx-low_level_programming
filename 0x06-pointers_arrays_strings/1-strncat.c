#include "main.h"
/**
 * _strncat - function that joins two char arrays
 *
 * @dest: first array parameter
 * @src: second array parameter
 * @n: number of chars to be concatenated
 *
 * Return: returns array of chars
 */
char *_strncat(char *dest, char *src, int n)
{
	int d = 0;
	int s = 0;

	/* get the length of each array passed */
	while (dest[d] != '\0')
		d++;

	/* concatenating src to dest */
	while ((n > s) && (src[s] != '\0'))
	{
		dest[d] = src[s];
		d++;
		s++;
	}

	dest[d] = '\0';

	return (dest);
}
