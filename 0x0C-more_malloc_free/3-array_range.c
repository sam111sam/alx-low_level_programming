#include <stdlib.h>
/**
 * array_range - create araray of no
 * @min: min
 * @max: max
 * Return: int*
 */
int *array_range(int min, int max)
{
	int *n;
	int i;
	
	if (min > max)
		return (NULL);
	n = malloc( sizeof(int) * (max - min + 1));
	
	if (n)
	{
		for (i = min; i <= max; i++)
		{
			n[i] = i;
		}
	}
	return (n);
}
