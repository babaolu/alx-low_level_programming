#include "main.h"
#include <unistd.h>
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
	char *err;
	int mul1, mul2;

	if (argc != 3)
	{
		err = "Error";
		while (*err)
		{
			_putchar(*err);
			err++;
		}
		_putchar('\n');

		return (-1);
	}

	mul1 = str2num(argv[1]);
	mul2 = str2num(argv[2]);

	mul1 *= mul2;
	if (mul1 < 0)
	{
		_putchar('-');
		mul1 = -mul1;
	}

	mul2 = numlen(mul1);

	printf("%d\n", mul1);

	return (0);
}

/**
 * numlen - Evaluates length of number
 * @num: Number
 *
 * Return: Length of number
 */
int numlen(int num)
{
	int a = 0;

	while (num)
	{
		num /= 10;
		a++;
	}
	return (a);
}

/**
 * str2num - Converts a number string to an integer
 * @cnum: Number string
 *
 * Return: Integer from string
 */
int str2num(char *cnum)
{
	int num = 0;

	while (*cnum)
	{
		num *= 10;
		num += *cnum - '0';
		cnum++;
	}
	return (num);
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
