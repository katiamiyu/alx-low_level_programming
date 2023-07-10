#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - create multidemensional array
 *
 * @width: rows of the array
 * @height: column of the array
 *
 * Return: two dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **muld;
	int x, y;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	muld = malloc(sizeof(int *) * height);

	if (muld == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		muld[x] = malloc(sizeof(int) * width);

		if (muld[x] == NULL)
		{
			while (x >= 0)
			{
				free(muld[x]);
				x--;
			}
			free(muld);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
		for (y = 0; y < width; y++)
			muld[x][y] = 0;

	return (muld);
}
