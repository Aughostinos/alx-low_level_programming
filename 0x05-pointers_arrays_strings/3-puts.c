#include "main.h"

/**
 * _puts - prints string
 * @str: input
 * Return: void
*/
void _puts(char *str)
{
	for (*str = 0; *str != '\0'; str++)
		_putchar(*str + 0);
	_putchar('\n');
}
