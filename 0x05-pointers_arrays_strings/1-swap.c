#include "main.h"
/**
 * swap_int - swap variable value
 * @a: parameter
 * @b: parameter
 */
void swap_int(int *a, int *b)
{
	int stor;

	stor = *a;
	*a = *b;
	*b = stor;
}
