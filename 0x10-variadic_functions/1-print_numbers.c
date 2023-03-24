#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers
 * @separator: Separator
 * @n: Number of parameters to print
 *
 * Return: Void (Nothing)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int iter = 0;
	int val;
	va_list ap;

	va_start(ap, n);

	for (iter = 0; iter < n - 1; iter++)
	{
		val = va_arg(ap, int);
		printf("%d", val);

		if (separator)
			printf("%s", separator);
	}
	printf("%d", va_arg(ap, int));
	printf("\n");
	va_end(ap);

}
