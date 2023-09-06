#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2-dimensional array of integers
 * @width: input
 * @height: input
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **n;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	n = malloc(sizeof(int *) * height);

	if (n == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		n[i] = malloc(sizeof(int) * width);

		if (n[i] == NULL)
		{
			for (; i >= 0; i--)
				free(n[i]);

			free(n);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			n[i][j] = 0;
	}

	return (n);
}
