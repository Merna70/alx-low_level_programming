#include "main.h"

/**
 *append_text_to_file - function to appends text at the end of a file
 *@filename: name of the created  file
 *@text_content: written text
 *
 *Return: 1 success and 0 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	/*declaration*/

	int file;
	ssize_t bytes = 0;
	ssize_t length = _strlen(text_content);

	/*starting appending*/

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (length)
		bytes = write(file, text_content, length);
	close(file);

	return (bytes == length ? 1 : -1);
}
