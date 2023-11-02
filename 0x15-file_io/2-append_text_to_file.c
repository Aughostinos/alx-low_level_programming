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
	FILE *file_pointer;
	int content_length, append_content;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		if (filename == -1)
			return (-1);
		else
			return (1);
	}

	file_pointer = fopen("filename", "a");
	if (file_pointer == NULL)
		return (-1);

	content_length = strlen(text_content);
	append_content = fwrite(text_content, 1, content_length, file_pointet);

	if (append_content != content_length)
	{
		fclose(file_pointer);
		return (-1);
	}

	fclose(file_pointer);
	return (1);
}
