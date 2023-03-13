#include "main.h"
#include <stdlib.h>
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
	int count, add;
	int res = 0;

	for (count = 1; count < argc; count++)
	{
		pname = argv[count];

		if (*pname == '-')
			pname++;
		while (*pname)
		{
			if ((*pname < '0') || (*pname > '9'))
			{
				printf("Error\n");
				return (1);
			}
			pname++;
		}
		add = atoi(argv[count]);
		res += add;

	}
	printf("%d\n", res);

	return (0);
}
