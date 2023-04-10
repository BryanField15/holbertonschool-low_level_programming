#include "main.h"

/**
 *read_textfile - reads a text file and prints it to the POSIX standard output
 *@letters: the number of letters it should read and print
 *@filename: file to read and print
 *Return: the actual number of letters it could read and print or 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_count, write_count;
	int fd;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	read_count = read(fd, buffer, letters);
	if (read_count == -1)
	{
		return (0);
	}

	write_count = write(STDOUT_FILENO, buffer, read_count);
	if (write_count == -1 || read_count != write_count)
	{
		return (0);
	}
	free(buffer);
	return (write_count);
}
