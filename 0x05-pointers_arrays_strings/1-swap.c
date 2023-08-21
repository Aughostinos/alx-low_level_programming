#include "main.h"

/**
 * swap_int - 
 * @a:
 * @b:
*/
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
