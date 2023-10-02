#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	size_t len = 0;

	if (filename == NULL || text_content == NULL)
		return (-1);

	file = fopen(filename, "a");
	if (file == NULL)
		return (-1);

	while (text_content[len])
		len++;

	if (fwrite(text_content, 1, len, file) != len)
	{
		fclose(file);
		return (-1);
	}

	fclose(file);
	return (1);
}
