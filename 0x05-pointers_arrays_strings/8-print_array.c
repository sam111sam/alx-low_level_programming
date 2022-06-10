#include "main.h"
#include <stdio.h>
/**
 * print_array - print the element of array
 * @a: parameter 1
 * @n: parameter 2
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
