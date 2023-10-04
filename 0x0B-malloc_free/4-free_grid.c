#include <stdlib.h>
#include "main.h"
/**
* *create_array -  creates an array of chars
* @grid : 2D array
* @height : columns
* Return: Alawys 0 (Success)
*/

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
