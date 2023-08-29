#include "main.h"
/**
 *_memset - function fills the first n bytes of the memory area
 *@s: the memory area pointed to be filled
 *@b:constant byte
 *@n:number of bytes to be changed
 *
* Return: a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{

	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
