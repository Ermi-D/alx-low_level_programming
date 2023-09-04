#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - copy string to newly allocated spacein memory
 * @str:string to copy
 * Return: 0
 */
char *_strdup(char *str)
{
	int i;
	char *new;
	int a = 0;

	if (str == NULL)
		return (NULL);
for (i = 0; str[i] != '\0'; i++)
		a++;

	new  = malloc(sizeof(char) * a + 1);

	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		new[i] = str[i];

	return (new);
}
