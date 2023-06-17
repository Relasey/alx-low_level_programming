#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd;
	ssize_t _r, _w;

	if (!filename)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	_r = read(fd, buffer, letters);
	if (_r == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	_w = write(STDOUT_FILENO, buffer, _r);
	if (_w == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	return (_w);
}
