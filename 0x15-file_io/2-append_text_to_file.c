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
	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}

	FILE *file = fopen(filename, "a");

	if (file == NULL)
	{
		return (-1);
	}

	size_t text_length = strlen(text_content);
	size_t bytes_written = fwrite(text_content, 1, text_length, file);

	if (bytes_written != text_length)
	{
		fclose(file);
		return (-1);
	}

	fclose(file);
	return (1);
}
