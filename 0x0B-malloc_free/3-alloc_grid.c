#include <stdlib.h>
/**
 * alloc_grid - create 2D array
 * @width: row
 * @height: column
 * Return: int **
 */
int **alloc_grid(int width, int height)
{
	int **matrix = NULL;
	int i, j;

	if (width * height <= 0)
	{
		return (NULL);
	}

	matrix = (int **) malloc(sizeof(int *) * width);

	if (matrix == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		matrix[i] = (int *)malloc(sizeof(int) * height);
		for (j = 0; j < height; j++)
		{
			matrix[i][j] = 0;
		}
	}
	return (matrix);
}

