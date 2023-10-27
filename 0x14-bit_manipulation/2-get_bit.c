#include "main.h"

/**
 * get_bit - Returns  value of a bit.
 * @n: unsigned long integer.
 * @index: The index of the bit
 *
 * Description: the value of a bit at a given index.
 * Return:  specified index, or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index < (sizeof(unsigned long int) * 8))
		return ((n >> index) & 1);
	return (-1);

}
