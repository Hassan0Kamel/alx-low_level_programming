#include <stdlib.h>
#include "main.h"

/**
 * read_textfile- Read text to print to standard output
 * @letters: number of letters to read.
 * @filename: text file to read
 * Return: w- actual number of bytes
 * 0 if the function failes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
