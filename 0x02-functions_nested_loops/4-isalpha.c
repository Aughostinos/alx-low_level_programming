#include "main.h"

/**
 * _isalpha - function checks if the input is letter or not
 *
 * @c: the input of the function
 *
 * Return: 1 if the input is a letter and 0 otherwise
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
