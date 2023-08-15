#include "main.h"

/**
 * print_times_table - function
 * @n: input
 * Return: 0
*/
void print_times_table(int n)
{
	int i, j, l;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				l = j * i;
				if (j == 0)
				{
					_putchar(l + '0');
				} else if (l < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(l + '0');
				} else if (l >= 10 && l < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((l / 10) + '0');
					_putchar((l % 10) + '0');
				} else if (l >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((l / 100) + '0');
					_putchar(((l / 10) % 10) + '0');
					_putchar((l % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}

}
