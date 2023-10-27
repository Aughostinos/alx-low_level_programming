#include "main.h"
/**
 * get_endianness - Checks the endianness.
 *
 * Description:  function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *s_byte = (char *)&num;

	if (*s_byte == 1)
		return (1);
	return (0);
}
