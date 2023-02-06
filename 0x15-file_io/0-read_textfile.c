#include "main.h"

/**
 * read_textfile - eads a text file and prints it to the POSIX standard output
 * @filename: file to be read
 * @letters: sizze of letters to read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wr;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	rd = read(fd, buf, letters);
	if (rd < 0)
	{
		free(buf);
		return (0);
	}
	buf[rd] = '\0';
	close(fd);
	wr = write(STDOUT_FILENO, buf, rd);
	if (wr < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (wr);
}
