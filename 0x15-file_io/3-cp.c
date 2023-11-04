#include "main.h"
#define BUFFER_SIZE 1024

/**
 * main - cp content
 * @argc: The number of arguments
 * @argv: An array of argument
 *
 * Description: Copies the content of a file to another file
 * Return: 0 on success, or an error code on failure
 */
int main(int argc, char *argv[])
{
	int cp_from, cp_to, file_read, file_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	cp_from = open(argv[1], O_RDONLY);
	if (cp_from == -1)
	{
		dprintf(2, "Error: Can't read from file \n");
		exit(98);
	}

	cp_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (cp_to == -1)
	{
		dprintf(2, "Error: Can't write to \n");
		exit(99);
	}
	file_read = read(cp_from, buffer, BUFFER_SIZE);
	if (file_read == -1)
	{
		dprintf(2, "Error: Can't read from file \n");
		exit(98);
	}

	while (file_read  > 0)
	{
		file_written = write(cp_to, buffer, file_read);
		if (file_written == -1)
		{
			dprintf(2, "Error: Can't write to \n");
			exit(99);
		}
	}

	if (close(cp_from) == -1)
	{
		dprintf(2, "Error: Can't close fd \n");
		exit(100);
	}

	if (close(cp_to) == -1)
	{
		dprintf(2, "Error: Can't close fd \n");
		exit(100);
	}

	return (0);
}
