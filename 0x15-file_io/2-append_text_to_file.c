#include "main.h"
#include <string.h>

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: points to the files name
 * @text_content:NULL terminated string
 * Return: 1 if file exists
 * -1 if file does exist or if don't have permission to write
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, lenght;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		lenght = write(fd, text_content, strlen(text_content));
		if (lenght == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
