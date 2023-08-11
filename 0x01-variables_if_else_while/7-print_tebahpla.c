#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: C prgrams
 * Return: 0 (success)
*/

int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
	putchar(i);
	i--;
	}
	putchar('\n');
	return (0);
}
