#include "main.h"

/**
 *main - copies one file to another
 *@argc: number of command line arguments
 *@argv: array of command line arguments
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int src_fd, dest_fd;
	ssize_t read_bytes, write_bytes;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit (97);
	}

	src_fd = open(argv[1], O_RDONLY);
	if (src_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit (98);
	}

	dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit (99);
	}

	buffer = malloc(sizeof(*buffer) * 1024);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	read_bytes = read(src_fd, buffer, 1024);
	if (read_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	while (read_bytes != 0)
	{
		write_bytes = write(dest_fd, buffer, read_bytes);
		if (write_bytes == -1 || read_bytes != write_bytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			exit (98);
		}
	}
	free(buffer);

	close(src_fd);
	if (close(src_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd);
		exit(100);
	}

	close(dest_fd);
	if (close(dest_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
		exit(100);
	}
	return (0);

}
