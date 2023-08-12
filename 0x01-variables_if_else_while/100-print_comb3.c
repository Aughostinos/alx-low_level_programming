#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description:
 * Return: 0
*/

int main(void)
{
	int n, i;

	for (n = 48; n <= 57; n++)
	{
		for (i = 48; i <= 57; i++)
		{
			if (n != i && n < i)
			{
				putchar(n);
				putchar(i);
				if (n != 56 || i != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
