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
	int s, s2;

	s = 0;
	s2 = 0;

	int i;

	for (i = 0; y < size; i++)
	{
		s = s + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		s2 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", s, s2);
}
