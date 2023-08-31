#include "main.h"
/**
 * is_prime_number - check if the number is prime
 * @n: number to evaluate
 * Return: 1 or 0
 */
int real_prime(int n, int i);
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime(n, n - 1));
}

/**
 * real_prime - recursive function
 * @n: input
 * @i: input
 * Return: 1 if n is prime, 0 if not
 */
int real_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (real_prime(n, i - 1));
}
