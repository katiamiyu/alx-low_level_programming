#include "main.h"
/**
 * _strpbrk - Entry point
 *
 * @s: input string
 * @accept: input string to compare
 *
 * Return: pointer value
 */
char *_strpbrk(char *s, char *accept)
{
	int x;


	while (*s)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return ('\0');
}
