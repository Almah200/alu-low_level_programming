#include "main.h"
#include <stddef.h>
#include <fcntl.h>
/**
 * Reads a text file and prints it's date to the POSIX standard output.
 *
 * @param filename: The name of the text file to be read.
 * @param letters: The number of letters to read and print.
 * Return: The actual number of letters read and printed.
 * Returns 0 if the file cannot be opened or read, or if write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, ssize_t letters)
{
	int fd;
	int a, b;
	char *buf;
	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	a = read(fd, buf, letters);
	if (a < 0)
	{
		free(buf);
		return (0);
	}
	buf[a] = '\0';
	close(fd);
	b = write(STDOUT_FILENO, buf, a);
	if (b < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (b);
}
