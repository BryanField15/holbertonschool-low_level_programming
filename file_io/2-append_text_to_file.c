#include "main.h"

/**
 *append_text_to_file - appends text at the end of a file
 *@filename: name of the field
 *@text_content: NULL terminated string to add at the end of the file
 *Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i;
	int fd;
	int wstatus;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}

	i = 0;
	while (text_content[i] != '\0')
	{
		i = i + 1;
	}

	wstatus = write(fd, text_content, i);
	if (wstatus == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
