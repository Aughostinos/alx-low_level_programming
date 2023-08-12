#include <stdio.h>

/**
 * main - Entry point
 * Description:
 * Return: 0
*/

int main(void)
{
	int n, i;

	for (n = 0; n <= 99; n++)
	{
		for (i = 0; i <= 99; i++)
		{
			if (n < i)
			{
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);
				putchar(' ');
				putchar((i / 10) + 48);
				putchar((n % 10) + 48);
				if (n != 98 || j != 99)
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
