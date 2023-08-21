#include "main.h"
/**
 * _strchr - locate the first occurrence of a char in a string
 * @s: string
 * @c:  char to be located
 * Return: a pointer to the first c in ths string or NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
