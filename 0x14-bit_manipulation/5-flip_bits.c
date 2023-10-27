#include "main.h"
/**
 * flip_bits -  returns the number of bits.
 * @n: The first number
 * @m: the second number
 *
 * Description:   returns the number of bits you would need to
 * flip to get from one number to another.
 * Return: the number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m);
{
	unsigned long int exor_output = n ^ m;
	int counter = 0;

	while (exor_output > 0)
	{
		counter += exor_output & 1;
		exor_output = exor_output >> 1;
	}
	return (counter);
}
