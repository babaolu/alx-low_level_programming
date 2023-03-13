#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print program name
 * @argc: Number of commandline arguments
 * @argv: Array of commandline arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int mul1, mul2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	mul1 = atoi(argv[1]);
	mul2 = atoi(argv[2]);

	printf("%d\n", mul1 * mul2);
	return (0);
}
