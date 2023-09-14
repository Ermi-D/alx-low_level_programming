#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: number of paramters.
 * @...: number of paramters to calculate.
 * Return: If n == 0 - 0.
 *         Otherwise - result.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list agg;
	unsigned int i, sum = 0;

	va_start(agg, n);

	for (i = 0; i < n; i++)
		sum += va_arg(agg, int);

	va_end(agg);

	return (sum);
}
