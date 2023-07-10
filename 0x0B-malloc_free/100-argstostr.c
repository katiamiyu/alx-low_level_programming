#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * argstostr - concatenates all the arguments of an array
 *
 * @ac: integer input (number of arguments)
 * @av: multidimentiomal array of char
 *
 * Return: array of char with dynamic mem allocation
 */
char *argstostr(int ac, char **av)
{
	int x, y;
	int count = 0;
	char *str;

	if ((ac == 0) || (av == NULL))
		return (NULL);

	for (x = 0; x < ac; x++)
		for (y = 0; av[x][y] != '\0'; y++)
			count++;

	count = count + ac;
	str = malloc(sizeof(char) * count + 1);

	if (str == NULL)
		return (NULL);

	count = 0;

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			str[count] = av[x][y];
			count++;
		}

		if (str[count] == '\0')
			str[count++] = '\n';

	}
	return (str);
}
