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
	int _file, read_letters, written_letters;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(letters);
	if (buff == NULL)
		return (0);

	_file = open(filename, O_RDONLY);
	if (_file == -1)
	{
		free(buff);
		return (0);
	}

	read_letters = read(_file, buff, letters);
	if (read_letters == -1)
	{
		free(buff);
		close(_file);
		return (0);
	}

	written_letters = write(STDOUT_FILENO, buff, read_letters);
	if (written_letters == -1 || written_letters != read_letters)
	{
		free(buff);
		close(_file);
		return (0);
	}

	free(buff);
	close(_file);
	return (read_letters);
}
