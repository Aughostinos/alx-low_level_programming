#include "main.h"

/**
 * swap_int - swap the value of numbers
 * @a: input
 * @b: input
*/
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
