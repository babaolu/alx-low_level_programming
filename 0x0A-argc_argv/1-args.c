#include "main.h"
#include <unistd.h>

/**
 * main - Print program name
 * @argc: Number of commandline arguments
 * @argv: Array of commandline arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, __attribute__ ((unused)) char *argv[])
{
	if (argc < 1)
		return (-1);

	_putchar('0' + (argc - 1));
	_putchar('\n');

	return (0);
}

/**
 * _putchar - writes the characer c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropritely.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
