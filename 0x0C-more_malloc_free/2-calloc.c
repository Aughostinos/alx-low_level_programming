#include "main.h"
#include <stdlib.h>

/**
 * *setmemory - helper funcction
 * @s: input
 * @b: input
 * @n: input
 * Return: pointer 
*/
char *setmemory(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array using mollac
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	setmemory(p, 0, nmemb * size);

	return (p);
}
