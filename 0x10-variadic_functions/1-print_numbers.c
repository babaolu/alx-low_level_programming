#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers
 * @separator: Separator of printed numbers
 * @n: Number of values to print
 *
 * Return: Void (Nothing)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int iter = 0;
	va_list ap;

	va_start(ap, n);
	for (iter = 0; iter < n - 1; iter++)
	{
		print_int(va_arg(ap, int));

		if (separator)
			print_str(separator);
	}
	print_int(va_arg(ap, int));
	_putchar('\n');
	va_end(ap);
}

/**
 * print_int - Prints an integer
 * @val: Integer to print
 *
 * Return: Void (Nothing)
 */
void print_int(int val)
{
	int len = 0, valcopy = val, pval;

	if (!valcopy)
	{
		_putchar('0');
		return;
	}

	if (valcopy < 0)
	{
		_putchar('-');
		valcopy *= -1;
		val *= -1;
	}

	while (valcopy)
	{
		valcopy /= 10;
		len++;
	}

	valcopy = val;

	while (len)
	{
		pval = _pow(10, len - 1);
		_putchar ('0' + (valcopy / pval));

		valcopy %= pval;
		len--;
	}
}

/**
 * print_str - Prints a string
 * @s: String to print
 *
 * Return: Void (Nothing)
 */
void print_str(const char *s)
{
	if (!s)
		return;
	while (*s)
	{
		_putchar(*s);
		s++;
	}
}

/**
 * _pow - Finds the nth power of a number
 * @base: Base
 * @exp: Exponent
 *
 * Return: Nth power
 */
int _pow(int base, int exp)
{
	int val = 1;

	while (exp)
	{
		val *= base;
		exp--;
	}
	return (val);
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
