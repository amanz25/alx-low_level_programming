#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file
 * @text_content: text to be written
 *
 * Return: 1 (success) or -1 (failure)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr, count = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[count])
			count++;
		wr = write(fd, text_content, count);
		if (wr != count)
			return (-1);
	}

	close(fd);

	return (1);
}
