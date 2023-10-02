#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * print_usage - Print the correct usage of the program.
 */
void print_usage(void)
{
	dprintf(2, "Usage: cp file_from file_to\n");
}

/**
 * open_source_file - Open the source file and handle errors.
 * @file_name: The name of the source file.
 *
 * Return: The file descriptor of the opened source file.
 */
int open_source_file(const char *file_name)
{
	int source_fd = open(file_name, O_RDONLY);
	if (source_fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_name);
		exit(98);
	}

	return (source_fd);
}

/**
 * open_destination_file - Open the destination file and handle errors.
 * @file_name: The name of the destination file.
 *
 * Return: The file descriptor of the opened destination file.
 */
int open_destination_file(const char *file_name)
{
	int dest_fd = open(file_name, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (dest_fd == -1)
	{
		dprintf(2, "Error: Can't write to file %s\n", file_name);
		exit(99);
	}

	return (dest_fd);
}

/**
 * copy_file - Copy the content from source file to destination file.
 * @source_fd: The file descriptor of the source file.
 * @dest_fd: The file descriptor of the destination file.
 */
void copy_file(int source_fd, int dest_fd)
{
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(2, "Error: Can't write to file descriptor\n");
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(2, "Error: Can't read from source file\n");
		exit(98);
	}
}

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(2, "Error: Incorrect number of arguments\n");
		print_usage();
		return (97);
	}

	const char *file_from = argv[1];
	const char *file_to = argv[2];

	int source_fd = open_source_file(file_from);
	int dest_fd = open_destination_file(file_to);

	copy_file(source_fd, dest_fd);

	if (close(source_fd) == -1 || close(dest_fd) == -1)
	{
		dprintf(2, "Error: Can't close file descriptor\n");
		return (100);
	}

	return (0);
}
