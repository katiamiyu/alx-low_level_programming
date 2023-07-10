#include "main.h"
/**
 * _puts_recursion -prints char of a string recursively
 *
 * @s: array of char as imput
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');

	else if (s[0] != '\0')
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}

