#include "main.h"
/**
 * clear_bit - Clears a bit.
 * @n: A pointer to the unsigned long integer.
 * @index: The index of the bit to clear.
 *
 * Description: Clears the value of a bit at a given index to 0
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(*n) * 8)
	{
		/*clear the vale of a bit at the given index*/
		*n = *n & (~(1 << index));
		return (1);
	}

	return (-1);
}
