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
	unsigned bit_index;
	unsigned desired_bit;

	/*check if index out of range*/
	if (index < (sizeof(unsigned long int) * 8))
		bit_index = n >> index;
		desired_bit = bit_index & 1;
		return (desired_bit);
	return (-1);

}
