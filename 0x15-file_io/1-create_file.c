#include "main.h"
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
 * create_file - function that creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 *Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int _file;
	int content;

	if (filename == NULL)
		return (-1);

	_file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (_file == -1)
		return (-1);

	if (text_content != NULL)
	{
		content = write(_file, text_content, strlen(text_content));
		if (content == -1)
		{
			close(_file);
			return (-1);
		}
	}
	close(_file);
	return (1);

}
