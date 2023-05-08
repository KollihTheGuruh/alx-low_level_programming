#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: the name of the file to read
 * @letters: the number of letters to read from the file
 *
 * Return: the number of bytes read and printed to stdout, or 0 if failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}
