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
	int file_pointer, append_content, content_length;

	if (filename == NULL)
		return (-1);

	file_pointer = open(filename, O_WRONLY | O_APPEND);
	if (file_pointer == -1)
		return (-1);

	if (text_content != NULL)
	{
		content_length = strlen(text_content);
		append_content = write(file_pointer, text_content, content_length);

		if (append_content == -1)
		{
			close(file_pointer);
			return (-1);
		}
	}

	close(file_pointer);
	return (1);
}
