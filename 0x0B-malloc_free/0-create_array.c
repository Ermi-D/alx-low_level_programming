#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - create array
 * @size: size of array
 * @c: char to store in array
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
