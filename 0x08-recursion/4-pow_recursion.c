#include "main.h"
/**
 * _pow_recursion - using recursion to find power
 *
 * @x: number
 * @y: power
 *
 * Return: integrr result
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (-1);
}
