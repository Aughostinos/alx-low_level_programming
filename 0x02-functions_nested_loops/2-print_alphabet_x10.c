#include "main.h"

/**
 * print_alphabet - 10 timmes in lower case using _putchar()
*/

void print_alphabet(void)
{
	int i, j;

	for (j = 0; j <= 9; j++)
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
	_putchar('\n');
}
