#include "variadic_functions.h"

/**
 * print_strings - Prints strings
 * @separator: Separator
 * @n: Number of parameters to print
 *
 * Return: Void (Nothing)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int iter = 0;
	char *val;
	va_list ap;

	va_start(ap, n);

	for (iter = 0; iter < n - 1; iter++)
	{
		val = va_arg(ap, char *);
		if (!val)
			printf("(nil)");
		else
			printf("%s", val);

		if (separator)
			printf("%s", separator);
	}
	printf("%s", va_arg(ap, char *));
	printf("\n");
	va_end(ap);

}
