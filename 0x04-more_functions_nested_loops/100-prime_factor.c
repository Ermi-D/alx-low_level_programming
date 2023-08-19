#include <stdio.h>
#include <math.h>

/**
 * main - function finds and prints the largest prime factor of the number 612852475143
 * Return:void() 
 */
int main(void)
{
	long int n;
	long int j;
	long int i;

	n = 612852475143;
	j = -1;

	while (n % 2 == 0)
	{
		j = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			j = i;
			n = n / i;
		}
	}

	if (n > 2)
		j = n;

	printf("%ld\n", j);

	return (0);
}
