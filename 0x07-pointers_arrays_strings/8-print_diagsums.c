#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of matrix
 * @a: array of matirix
 * @size: size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int suml = 0, sumr = 0;

	for (i = 0, j = size - 1; i < size * size; i += size + 1, j += size - 1)
	{
		suml += a[i];
		sumr += a[j];
	}
	printf("%d, %d\n", suml, sumr);
}
