#include "main.h"

/**
 * read_textfile - Reads an text file and prints to the standard output
 * @filename: The pathname of the file to read
 * @letters: Number of letters to read and print
 *
 * Return: the Number of letters read and printed
 * 0 if filename is NULL,
 * write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t act_rd, act_wr;
	int fd;
	char *buff;

	buff = malloc(sizeof(*buff) * letters);
	if (!buff)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	act_rd = read(fd, (char *) buff, letters);
	if (act_rd < 0)
	{
		close(fd);
		return (0);
	}

	act_wr = write(STDOUT_FILENO, (char *) buff, act_rd);
	if (act_wr < act_rd)
	{
		close(fd);
		return (0);
	}

	close(fd);
	return (act_wr);
}
