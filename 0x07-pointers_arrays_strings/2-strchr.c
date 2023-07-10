#include "main.h"
/**
 * _strchr - char search function
 *
 * @s: char pointer
 * @c: char var
 *
 * Return: char pointer
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
