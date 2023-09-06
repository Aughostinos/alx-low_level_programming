#include <stdlib.h>
#include "main.h"

/**
 * word_counter - counts the number of words in a string
 * @s: string input
 * Return: word counts
 */
int word_counter(char *s)
{
	int n, j, i;

	n = 0;
	i = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == ' ')
			n = 0;
		else if (n == 0)
		{
			n = 1;
			i++;
		}
	}

	return (i);
}
/**
 * **strtow - splits a string into words
 * @str: string
 * Return: pointer or NULL
 */
char **strtow(char *str)
{
	char **mtx, *tmp;
	int i, k = 0, len = 0, words, j = 0, start, end;

	while (*(str + len))
		len++;
	words = word_counter(str);
	if (words == 0)
		return (NULL);

	mtx = (char **) malloc(sizeof(char *) * (words + 1));
	if (mtx == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (j)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (j + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				mtx[k] = tmp - j;
				k++;
				j = 0;
			}
		}
		else if (j++ == 0)
			start = i;
	}

	mtx[k] = NULL;

	return (mtx);
}
