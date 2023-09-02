#include "main.h"

/**
 * _isupper - function that check if the letter in upper case or lowercase
 * @c: the input char
 * Return: 1 if c is upper case 0 if c is lwoer case
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
