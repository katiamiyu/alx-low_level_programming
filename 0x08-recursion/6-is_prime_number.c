#include "main.h"
int is_prime(int x, int y);

/**
 * is_prime_number - checks if input is a prime number
 *
 * @n: integer input
 *
 * Return: integer value
 */
int is_prime_number(int n)
{
	int count = 2;

	return (is_prime(n, count));
}

/**
 * is_prime - checks if input is prime
 *
 * @x: input integdr value
 * @y: counter
 *
 * Return: integer
 */
int is_prime(int x, int y)
{
	int flag = 0;

	if (x < 2)
		return (0);
	else if ((x >= 2) && (y < (x / 2)))
	{
		if (x % y == 0)
			flag++;
		is_prime(x, y + 1);
	}
	if (flag > 0)
		return (0);
	else
		return (1);
}
