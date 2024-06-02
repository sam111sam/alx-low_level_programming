#include <stdlib.h>
/**
 * free_grid - remove allocated space
 * @grid: the pointer 2D array
 * @height: its row
 * Return: void
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
