#include "main.h"
/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output
 * @filename: file pointer
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int open_file, read_litters, write_letters;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}
	open_file = open(filename, O_RDONLY);
	if (open_file == -1)
	{
		return (0);
	}
	buf = malloc(letters);
	if (buf == NULL)
	{
		close(open_file);
		return (0);
	}
	read_litters = read(filename, buf, letters);
	if (read_litters == -1)
	{
		free(buf);
		close(open_file);
		return (0);
	}
	write_letters = write(STDOUT_FILENO, buf, read_litters);
	if (write_letters == -1)
	{
		free(buf);
		close(open_file);
		return (0);
	}
	free(buf);
	close(open_file);
	return (write_letters);
}
