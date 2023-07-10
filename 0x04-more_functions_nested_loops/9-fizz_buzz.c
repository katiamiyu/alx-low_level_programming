#include <stdio.h>
/**
 * main - fizz buzz app
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x  = 1;

	while (x <= 100)
	{
		if ((x % 3 == 0) && (x % 5 != 0))
			printf(" Fizz");
		else if ((x % 3 != 0) && (x % 5 == 0))
			printf(" Buzz");
		else if ((x % 3 == 0) && (x % 5 == 0))
			printf(" FizzBuzz");
		else if (x == 1)
			printf("%d", x);
		else
			printf(" %d", x);

		x++;
	}
	printf("\n");
	return (0);
}
