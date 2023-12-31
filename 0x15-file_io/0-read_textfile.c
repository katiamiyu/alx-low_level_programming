#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * read_textfile - open file and read content to stdout.
 * @filename: textfile.
 * @letters: size of text.
 * Return: sizes (success), 0 (NULL).
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t ws;
	ssize_t t;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	t = read(fd, buffer, letters);
	ws = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fd);

	return (ws);

}
