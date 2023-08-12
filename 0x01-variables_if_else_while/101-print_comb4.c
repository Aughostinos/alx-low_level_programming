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
	int n, i, l;

	for (n = 48; n <= 57; n++)
	{
		for (i = 48; i <= 57; i++)
		{
			for (l = 50; l <= 57; l++)
			{
				if (n != i && n < i)
				{
					putchar(n);
					putchar(i);
					putchar(l);
					if (n != 55 || i != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
