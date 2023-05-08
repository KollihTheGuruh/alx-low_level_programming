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
	FILE *fp;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
	return (0);

	fp = fopen(filename, "r");

	if (!fp)
	return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
	return (0);

	nrd = fread(buf, 1, letters, fp);
	nwr = fwrite(buf, 1, nrd, stdout);

	fclose(fp);
	free(buf);

	return (nwr);
}
