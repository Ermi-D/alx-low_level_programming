#include "main.h"

/**
 * _isupper - program to  uppercase letters
 * @c: charcter to check
 *
 * Return: 0. 
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
