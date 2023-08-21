#include "main.h"
/**
 * _strlen - a function
 * @s: the string to be evaluated
 * Return: success (lenght)
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

