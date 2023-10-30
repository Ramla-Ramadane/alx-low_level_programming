#include "main.h"
#include <string.h>

/**
 * create_file - function that creates a file
 * @filename: points to files name
 * @text_content: NULL terminated string
 * Return: created file
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		len = write(fd, text_content, strlen(text_content));
		if (len == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
