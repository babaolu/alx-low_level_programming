#include "main.h"
#include <stdio.h>

/**
 * main - Print program name
 * @argc: Number of commandline arguments
 * @argv: Array of commandline arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *pname;
	int count;

	if (argc < 1)
		return (-1);

	for (count = 0; count < argc; count++)
	{
		pname = argv[count];
		printf("%s\n", pname);
	}

	return (0);
}
