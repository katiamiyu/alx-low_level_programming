#include "main.h"
int find_sqrt(int n, int p);

/**
 * _sqrt_recursion - finds root of number
 *
 * @n: integer input
 *
 * Return: integer value
 */
int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 1));
}

/**
 * find_sqrt - finds the root of a number
 *
 * @n: integer number
 * @g: guess number
 *
 * Return: integer value
 */
int find_sqrt(int n, int g)
{
	int sqr = g * g;

	if (n < sqr)
		return (-1);
	else if (n == sqr)
		return (g);
	else
		return (find_sqrt(n, g + 1));
}
