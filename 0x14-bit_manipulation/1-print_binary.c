#include "main.h"

/**
 * print_binary - Prints a binary number.
 * @n: The unsigned long int number to print in binary.
 *
 * Description: prints the binary representation of a number.
 */
void print_binary(unsigned long int n)
{
	/*check if n>1*/
	if (n > 1)
	{
		/* call the print_binary recursively */
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
