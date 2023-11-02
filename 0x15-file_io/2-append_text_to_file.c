#include "main.h"
#include <string.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *_file;
	int content, text_len;

	if (filename == NULL)
		return (-1);

	_file = fopen(filename, "a");
	if (_file == -1)
		return (-1);

	if (text_content == NULL)
	{
		return (-1);
	}
	else
	{
		text_len = strlen(text_content);

		content = write(_file, text_content, text_len);
		if (content == -1)
		{
			close(_file);
			return (-1);
		}
	}
	close(_file);
	return (1);
}
