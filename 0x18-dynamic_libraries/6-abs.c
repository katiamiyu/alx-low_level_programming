#include "main.h"
/**
 * _abs - the absolute value of a number
 * @n: interger to evalute
 * Return: (n)
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	else if (n >= 0)
	{
		n = n;
	}
	return (n);
}
