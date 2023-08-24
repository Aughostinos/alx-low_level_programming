#include "main.h"

/**
  * print_number - Prints number using _putchar
  * @n: input
  * Return: Void
*/
void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		_putchar('-');
		n* = -1;
	}

	i = n;

	if (i / 10)
		print_number(i / 10);
	_putchar(i % 10 + '0');
}
