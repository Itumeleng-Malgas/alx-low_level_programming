#include "main.h"

/**
* free_grid -  frees a 2 dimensional array
* @grid: previous grid poiter
* @height: previous grid height
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
