#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - release the memory allocated to two dimensional array
 *
 * @grid: multidimentional array
 * @height: the length of each row
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int count = 0;

	while (count < height)
	{
		free(grid[count]);
		count++;
	}

	free(grid);
}
