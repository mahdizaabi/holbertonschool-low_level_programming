#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

/**
 * _strlen - extracting the length of a string
 * @str: pointer to the string
 *
 * Return: length of the string
 */
size_t _strlen(char *str)
{
	size_t length;

	for (length = 0; str[length]; length++)
		length++;
	return (length);
}

/**
 * append_text_to_file - appends a text at the end of a file.
 * @filename: name of the file .
 * @text_content: string to be written at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t wlen;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
		wlen = write(fd, text_content, _strlen(text_content));
			close(fd);
	if (wlen == -1)
		return (-1);
	return (1);
}
