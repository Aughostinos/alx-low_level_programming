#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts a binary string to an unsigned int.
 * @b: A pointer to a string containing the binary number (0s and 1s).
 *
 * Return: The converted unsigned int value, or 0 for invalid input.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == '\0')
		return (0);

	while (*b != '\0')
	{
		result = result * 2 + *b;
		b++
	}
	return (result);
}
