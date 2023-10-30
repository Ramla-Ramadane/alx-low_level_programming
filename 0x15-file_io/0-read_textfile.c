#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX str output
 * @filename: points to the files name
 * @letters: numbers of letters it should read and print
 * Return: number of letters it should print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, br, bw;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	buffer = malloc(letters * sizeof(char));

	if (buffer == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	br = read(fd, buffer, letters);
	bw = write(STDOUT_FILENO, buffer, br);

	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	else if (br == -1)
	{
		free(buffer);
		return (0);
	}
	else if (bw == -1 || bw != br)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);

	return (bw);
}
