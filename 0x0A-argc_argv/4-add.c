#include "main.h"
#include "stdlib.h"
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
	int count, add;
	int res = 0;

	for (count = 1; count < argc; count++)
	{
		add = atoi(argv[count]);
		if (add || (*argv[count] == '0'))
			res += add;
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", res);

	return (0);
}
