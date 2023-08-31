#include "main.h"
/**
 * factorial - eturns the factorial of a given number
 * @n: input number
 * Return: 0 or -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	return (factorial(n-1));
}
