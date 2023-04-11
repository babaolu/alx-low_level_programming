#include "main.h"
#include <stdio.h>

/**
 * main - Copies from a file to another file
 * @ac: Argument count
 * @av: Argument list
 *
 * Return: 0 on Success
 * 98, 99, 100 on error
 */
int main(int ac, char **av)
{
	int  fd_from, fd_to;
	ssize_t rd = 1;
	char buff[BUFF_SIZE];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	fd_from = open_r(av[1]);
	fd_to = open_w(av[2]);
	while (rd)
	{
		rd = read(fd_from, (char *) buff, BUFF_SIZE);
		if (rd > 0)
			write(fd_to, (char *)buff, rd);
		else
			break;
	}
	if (close(fd_from) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd_from);
		exit(100);
	}
	if (close(fd_to) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd_to);
		exit(100);
	}

	exit(0);
}

/**
 * open_r - Open file with read flag
 * @filename: Pathname of file
 *
 * Return: The file descriptor of opened file
 * Exits with 98 on error
 */
int open_r(const char *filename)
{
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			filename);
		exit(98);
	}

	return (fd);
}

/**
 * open_w - Open file with write flag
 * @filename: Pathname of file
 *
 * Return: The file descriptor of opened file
 * Exits with 99 on error
 */
int open_w(const char *filename)
{
	int fd;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
			filename);
		exit(99);
	}

	return (fd);
}
