#include "main.h"
/**
 * _print_rev_recursion -prints char of a string recursively
 *
 * @s: array of char as imput
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
	/*
	 * else
	*{
	*	_putchar('\n');
	*}
	*/
}

