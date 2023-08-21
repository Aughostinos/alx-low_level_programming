#include "main.h"

/**
 * _strlen - calclate the lenght of a string
 * @s: string input
*/
int _strlen(char *s)
{
	int n;

	for(n = 0; *s != '\0'; s++)
	{
	n++;
	}
    return (n);
}
