#include "3-calc.h"

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Argument list
 *
 * Return: 0 on Success
 * or else Failure
 */
int main(int argc, char **argv)
{
	int val;
	int (*oper)(int, int);

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	oper = get_op_func(argv[2]);
	if (!oper)
	{
		puts("Error");
		exit(99);
	}

	val = oper(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", val);

	exit(0);
}
