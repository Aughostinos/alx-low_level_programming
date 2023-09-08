#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @p: input
 * @old_size: input
 * @new_size: input
 * Return: pointer
 */
void *_realloc(void *p, unsigned int old_size, unsigned int new_size)
{
	char *p1;
	char *old_p;
	unsigned int i;

	if (new_size == old_size)
		return (p);

	if (new_size == 0 && p)
	{
		free(p);
		return (NULL);
	}

	if (!p)
		return (malloc(new_size));

	p1 = malloc(new_size);
	if (!p1)
		return (NULL);

	old_p = p;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			p1[i] = old_p[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			p1[i] = old_p[i];
	}

	free(p);
	return (p1);
}
