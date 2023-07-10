#include "main.h"
/**
 * _islower - printvseries of alphabets
 *
 * @c: input parameter
 *
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
