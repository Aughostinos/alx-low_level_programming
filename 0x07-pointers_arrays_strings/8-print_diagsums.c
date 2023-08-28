#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints the sum of the two diagonals of a square matrix
 * @a: input paeam
 * @size: param
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum, sum2;

	for (i = 0; i < size; i++)
	{
		sum += a[i];
		sum2 += a[size - i -1];
		a += size;
	}
	printf("%d, %d\n", s, s2);
}
