#include "main.h"

/**
 *create_file - creates a file
 *@filename: name of the file to create
 *@text_content: NULL terminated string to write to the file
 *Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int i;
	int rstatus;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		return (-1);
	}

	if  (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	i = 0;
	while (text_content[i] != '\0')
	{
		i = i + 1;
	}

	rstatus = write(fd, text_content, i);

	if (rstatus == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
