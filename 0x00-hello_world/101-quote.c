#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: C program
 *
 * Return: 1 (!success)
*/

int main(void)
{
	char x[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, x, 59);
	return (1);
}
