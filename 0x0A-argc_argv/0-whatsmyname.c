#include <stdio.h>

/**
* main - prints program name
* @argc: number of arguments
* @argv: arguments vector
* Return: 0
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
