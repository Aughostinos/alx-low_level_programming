#include "main.h"
#include <stdlib.h>
/**
 * str_concat -  concatenates two strings
 * @s1: input char
 * @s2: input char
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ci = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	conct = malloc(sizeof(char) * (i + j+ 1));

	if (conct == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		conct[i] = s2[j];
		i++, ci++;
	}
	conct[i] = '\0';
	return (conct);
}
