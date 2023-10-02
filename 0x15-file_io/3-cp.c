#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * Opens a file for reading or writing.
 *
 * @param filename: The name of the file to open.
 * @param mode: The mode in which to open the file.
 *
 * @return: A file descriptor for the opened file, or -1 on error.
 */
int open_file(const char *filename, int mode)
{
	int fd;

	fd = open(filename, mode);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}

	return (fd);
}

/**
 * Closes a file.
 *
 * @param fd: The file descriptor to close.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(EXIT_FAILURE);
	}
}

/**
 * Copies the contents of one file to another.
 *
 * @param fd_from: The file descriptor of the input file.
 * @param fd_to: The file descriptor of the output file.
 */
void copy_file(int fd_from, int fd_to)
{
	char buffer[BUFFER_SIZE];
	int bytes_read, bytes_written;

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(EXIT_FAILURE);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
}

int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	/* Check the number of arguments. */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(EXIT_FAILURE);
	}

	/* Open the input and output files. */
	fd_from = open_file(argv[1], O_RDONLY);
	fd_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	/* Copy the contents of the input file to the output file. */
	copy_file(fd_from, fd_to);

	/* Close the input and output files. */
	close_file(fd_from);
	close_file(fd_to);

	return (EXIT_SUCCESS);
}
