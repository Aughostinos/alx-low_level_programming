#include "main.h"
#include <stdlib.h>
/**
 * argstostr -  concatenates all the arguments of your program
 * @ac: input
 * @av: pointer
 * Return: s
 */
char *argstostr(int ac, char **av)
{
	int i, j, n = 0, k = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; n++)
			k++;
	}
	k += ac;

	s= malloc(sizeof(char) * k + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
		s[n] = av[i][j];
		n++;
	}
	if (s[n] == '\0')
	{
		s[n++] = '\n';
	}
	}
	return (s);
}
