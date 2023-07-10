#include "main.h"
int is_pal(char *s, int i, int len);
int _strlen_rec(char *s);
/**
 * is_palindrome - reverses a sting and check if its palindrome
 *
 * @s: string to check
 *
 * Return: 1 success 2 failed
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (is_pal(s, 0, _strlen_rec(s)));
}
/**
 * _strlen_rec - calculate the length of a string
 *
 * @s: string inputed
 *
 * Return: length of the string
 */
int _strlen_rec(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_rec(s + 1));
}
/**
 * is_pal - reverses string and check for palindrome
 *
 * @s: string inputed
 * @x: counter
 * @y: size of string
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_pal(char *s, int x, int y)
{
	if (*(s + x) != *(s + y - 1))
		return (0);
	if (x >= y)
		return (1);
	return (is_pal(s, x + 1, y - 1));
}
