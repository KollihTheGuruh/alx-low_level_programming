#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t j, k, l;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer ==  NULL)
		return (0);

	j = open(filename, O_RDONLY);
	k = read(j, buffer, letters);
	l = write(STDOUT_FILENO, buffer, k);

	if (j == -1 || k == -1 || l == -1 || l != k)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(j);

	return (l);

}
