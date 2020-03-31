#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

/**
 * create_file - creates a file.
 * @filename: name of the file to create.
 * @text_content: text content to be written .
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int i;
	ssize_t wlen = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	for (i = 0; text_content[i]; i++)
		i++;
	if (text_content != NULL)
		wlen = write(fd, text_content, i);
	close(fd);
	if (wlen == -1)
		return (-1);
	return (1);
}
