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
	char i = 'a';
	char u = 'A';

	while (i <= 'z')
	{
	putchar(i);
	i++;
	}
	while (u <= 'Z')
	{
	putchar(u);
	u++;
	}
	putchar('\n');
	return (0);
}
