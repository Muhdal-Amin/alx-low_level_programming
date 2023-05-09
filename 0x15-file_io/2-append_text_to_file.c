#include "main.h"

/**
 * append_text_to_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 * Return: 1 for sucess, -1 for failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, strlen = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (strlen = 0; text_content[strlen];)
			strlen++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, strlen);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
