#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - name
 * @name:print name
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
