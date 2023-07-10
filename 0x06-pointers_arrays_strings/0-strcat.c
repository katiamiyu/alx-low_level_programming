#include "main.h"
/**
 * _strcat - function that joins two char arrays
 *
 * @dest: first array parameter
 * @src: second array parameter
 *
 * Return: returns array of chars
 */
char *_strcat(char *dest, char *src)
{
	int d = 0;
	int s = 0;

	/* get the length of each array passed */
	while (dest[d] != '\0')
		d++;

	/* concatenating src to dest */
	while (src[s] != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;
	}

	dest[d] = '\0';

	return (dest);
}
