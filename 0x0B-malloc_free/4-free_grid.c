#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free 2 dimensinoal array
 * @grid: array
 * @height: height
 */
void free_grid(int **grid, int height)
{
	int i;
	int *p;

	for (i = 0; i < height ; i++)
	{
		p = grid[i];
		free(p);
	}
	free(grid);
}
