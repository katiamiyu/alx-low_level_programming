#include <stdio.h>
#include <math.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	long int num = 612852475143;
	long int large;
	int x;

	while (num % 2 == 0)
	{
		large = 2;
		num = num / 2;
	}
	for (x = 3; x <= sqrt(num); x = x + 2)
	{
		while (num % x == 0)
		{
			large = x;
			num = num / x;
		}
	}
	if (num > 2)
		large = num;

	printf("%ld\n", large);

	return (0);
}
