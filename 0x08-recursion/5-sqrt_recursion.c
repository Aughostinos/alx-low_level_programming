#include "main.h"
/**
 *  _sqrt_recursion - returns the natural square root of a number
 *  @n: input number
 *  Return: n power 2 or -1
 */
int sqr_rec(int j, int i);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqr_rec(n, 0));
}

/**
 * sqr_rec - squere
 * @j: input bumber
 * @i: input
 * Return: the resulting square root
 */
int sqr_rec(int j, int i)
{
	if (i * i > j)
		return (-1);
	if (i * i == j)
		return (i);
	return (sqr_rec(j, i + 1));
}
