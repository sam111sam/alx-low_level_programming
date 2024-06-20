#include <stddef.h>
/**
 * array_iterator - pass array element to d/t func
 * @array: array of int
 * @size: array size
 * @action: func ptr
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
