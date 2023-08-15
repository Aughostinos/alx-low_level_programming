#include "main.h"

/**
 *
 * _abs - function that calculate the absslute value of an int
 *
 * @int: parameter
 *
 * Return: 0
*/

int _abs(int n)
{
	if (n < 0)
		n = n * (-1);
	return (n);
}
