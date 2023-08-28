#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: input param
 * @accept: input param
 * Return: pointer or null
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				i++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (i);
		}
		s++;
	}
	return (i);
}
