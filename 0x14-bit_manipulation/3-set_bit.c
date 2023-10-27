#include "main.h"

/**
 * set_bit - set_bit value to 1
 * @n: unsigned long integer.
 * @index: The index of the bit
 *
 * Description: function that sets the value of a bit to 1 at a given index
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/*check if index is in range*/
	if (index < (sizeof(unsigned long int) * 8))
		/*set the bit at the specified index to 1*/
		*n |= (1 << index);
	return (-1);

}
