#include "main.h"
/**
 * rev_string - reverse a given string
 *
 * @s: pointer char array
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char x = '\0';

	while (s[j] != '\0')
	{
		j++;
	}
	while (i < j)
	{
		j--;
		x = s[i];
		s[i] = s[j];
		s[j] = x;
		i++;
	}
}
