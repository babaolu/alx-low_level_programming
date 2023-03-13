#include "main.h"
#include <stdio.h>

/**
 * main - Print program name
 * @argc: Number of commandline arguments
 * @argv: Array of commandline arguments
 *
 * Return: Always 0 (Success)
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	char *pname = argv[0];

	printf("%s\n", pname);

	return (0);
}
