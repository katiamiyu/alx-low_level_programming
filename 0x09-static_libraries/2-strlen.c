#include "main.h"
/**
 * _strlen - finds the lenth of a string
 *
 * @s: pointer char array
 *
 * Return: length of string as integer
 */
int _strlen(char *s)
{
	int lenstr = 0;

	while (*s != '\0')
	{
		lenstr++;
		s++;
	}
	return (lenstr);
}
