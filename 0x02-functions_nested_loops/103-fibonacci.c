#include <stdio.h>

/**
 * main - enrty point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int j, l, next, sum;

	j = 1;
	l = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		next = j + l;
		j = l;
		l = next;
	}

	printf("%lu\n", sum);

	return (0);
}

