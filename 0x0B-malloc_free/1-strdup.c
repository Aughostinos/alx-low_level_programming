#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicates space
 * @str: input
 * Return: s
 */
char *_strdup(char *str)
{
	char *s;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	s = malloc(sizeof(char) * (i + 1));

	if (s == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		s[r] = str[r];

	return (s);
}
