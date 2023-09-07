#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of array elements
 * @size: size of array
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = calloc(nmemb, size);

	if (ptr == NULL)
	return (NULL);


	return (ptr);
}
