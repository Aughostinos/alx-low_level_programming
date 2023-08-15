#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: C program
 *
 * Return: Always 0 (Success)
*/

int _putchar(char c)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
		_putchar(str[i]);
	_putchar('\n');
	return (0);
}
