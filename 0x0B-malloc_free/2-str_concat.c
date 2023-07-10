#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - recieves two strings, concatenates the strings
 *
 * @s1: first string
 * @s2: s3cond string
 *
 * Return: char pointer or null if function fails
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int x = 0;
	int y = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;

	result = malloc(sizeof(char) * (x + y + 1));

	if (result == NULL)
		return (NULL);

	x = 0;
	for (x = 0; s1[x] != '\0'; x++)
		result[x] = s1[x];

	y = 0;
	for (y = 0; s2[y] != '\0'; y++)
	{
		result[x] = s2[y];
		x++;
	}

	result[x] = '\0';
	return (result);
}
