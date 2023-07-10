#include "main.h"

/**
 * _strspn - Entry point
 *
 * @s: char string to be scanned
 * @accept: list of char
 *
 * Return: lenght of char as integer
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int lent = 0;
	int x;
	int y = 0;

	while (s[y] != '\0')
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[y] == accept[x])
			{
				lent++;
				break;
			}
			else if (accept[x + 1] == '\0')
				return (lent);
		}
		y++;
	}
	return (lent);
}
