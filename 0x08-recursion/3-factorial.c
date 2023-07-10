#include "main.h"
/**
 * factorial - findz the factorial value of input integer
 *
 * @n: number to peeforn factorial on
 *
 * Return: integer
 */
int factorial(int n)
{
	if (n >= 0)
	{
		if ((n == 0) || (n == 1))
			return (1);
		else
			return (n * factorial(n - 1));
	}
	return (-1);
}
