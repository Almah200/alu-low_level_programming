#include "main.h"
#include <stddef.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 * Return: the number of letters printed, or 0 if it failed
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
