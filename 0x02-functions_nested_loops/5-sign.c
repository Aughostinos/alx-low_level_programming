#include "main.h"

/**
 * print_sign - function prints the sign of the input number
 *
 * Return: 1 if n is positive - 0 if n == 0 - -1 if n is negative
*/

int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}


}
