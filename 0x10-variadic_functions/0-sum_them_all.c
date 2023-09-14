#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: parameter number
 * @...: params
 * Return: sum or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	int sum = 0;

	va_list args;

	va_start(args, n);

	unsigned int i = 0;

	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}
	va_end(args);

	return (sum);
}
