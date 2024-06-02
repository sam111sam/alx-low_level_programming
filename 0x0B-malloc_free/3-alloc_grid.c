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

	matrix = (int **) malloc(sizeof(int *) * height);

	if (matrix == NULL)
	{
		free(matrix);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		matrix[i] = (int *)malloc(sizeof(int) * width);
		for (j = 0; j < width; j++)
		{
			matrix[i][j] = 0;
		}
	}
	return (matrix);
}

