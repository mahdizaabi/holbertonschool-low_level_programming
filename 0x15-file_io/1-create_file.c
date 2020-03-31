#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

/**
 * _strlen - finds the length of a string
 * @str: pointer to the string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
	{
		length++;
	}

	return (length);
}

/**
 * create_file - creates a file.
 * @filename: name of the file to create
 * @text_content: text to be written .
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t lenw = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		lenw = write(fd, text_content, _strlen(text_content));
	close(fd);
	if (lenw == -1)
		return (-1);
	return (1);
}
