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
	char *pname;
	int count, add;
	int res = 0;

	for (count = 1; count < argc; count++)
	{
		add = atoi(argv[count]);
		if (add)
			res += add;
		else if (*argv[count] == '0')
		{
			pname = argv[count];
			while (*pname)
			{
				if (*pname != '0')
				{
					printf("Error\n");
					return (1);
				}
				pname++;
			}
		}
		else
		{
			printf("Error\n");
			return (1);
		}

	}
	printf("%d\n", res);

	return (0);
}
