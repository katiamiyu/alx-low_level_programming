#include "main.h"
/**
 * _strlen_recursion - prints total number of char in a string recursively
 *
 * @s: array of char as imput
 *
 * Return: int value as total
 */
int _strlen_recursion(char *s)
{
	int x = 0;

	if (s[0] != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (x);
}

