#include "main.h"
/*
 * binary_to_uint - converts binary number to decimel.
 * @b: pointer to a string that contain the binary number.
 * Description: this function uses bitwise operators to convert binary
 * to decimel
 * Return: the converted number, or 0
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int converted_n = 0;

	/*ckeck on the string to make sure its not empty*/
	if (b == '\0')
	{
		return (0);
	}

	/*loop on the string*/
	while (*b)
	{
		/*set a condion to return 0 if the string has any char except 0 or 1*/
		if (*b != '0' && *b != '1')
			return (0);
		/*convert binary to decimel*/
		converted_n = (converted_n << 1) | (*b - '0');
		b++;
	}
	return (converted_n);
}
