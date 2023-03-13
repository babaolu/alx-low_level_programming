#include "main.h"
#include <stdio.h>

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

	printf("%d\n", (argc - 1));

	return (0);
}
