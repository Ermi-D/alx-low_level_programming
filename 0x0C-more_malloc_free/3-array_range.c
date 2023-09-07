#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum range values
 * @max: maximum range values
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *output;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	output = malloc(sizeof(int) * size);

	if (output == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		output[i] = min++;

	return (output);
}






