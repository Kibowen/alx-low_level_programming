#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars, and initializes it with a char
 * @grid: arrays in the grid
 * @height: row count
 * Return: pointer to array or null
 **/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}