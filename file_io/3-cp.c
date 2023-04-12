#include "main.h"
#define BYTES 1024
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
	char *buffer[BYTES];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	src_fd = open(argv[1], O_RDONLY);
	if (src_fd == -1 || argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	read_bytes = read(src_fd, buffer, BYTES);
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
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		read_bytes = read(src_fd, buffer, BYTES);
	}

	if (close(src_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd);
		exit(100);
	}

	if (close(dest_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
		exit(100);
	}
	return (0);

}
