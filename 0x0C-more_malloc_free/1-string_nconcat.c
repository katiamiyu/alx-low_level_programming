#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings.
 *
 * @s1: first input string.
 * @s2: second input string.
 * @n: total bytes to be allocated.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int x, y, z;
	unsigned int count = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] != '\0'; x++)
		count++;

	for (y = 0; s2[y] != '\0'; y++)
		count++;

	if (n > y)
		n = y;

	count = x + n;

	str = malloc(count + 1);

	if (str == NULL)
		return (NULL);

	for (z = 0; z < count; z++)
		if (z < x)
			str[z] = s1[z];
		else
			str[z] = s2[z - x];

	str[z] = '\0';

	return (str);
}
