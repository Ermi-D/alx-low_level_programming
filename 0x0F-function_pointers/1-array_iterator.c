
#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - excute function on each element of array
 * @array: array
 * @size: size of array
 * @action: function performs on each element of array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
