#include "variadic_functions.h"

/**
 * print_all - Prints anything
 * @format: The format in which to print
 *
 * Return: Void (Nothing)
 */
void print_all(const char * const format, ...)
{
	va_list apt;
	const char *str, *iformat = format;

	va_start(apt, format);
	while (*iformat)
	{
		switch (*iformat)
		{
		case 'c':
			printf("%c", va_arg(apt, int));
			break;
		case 'i':
			printf("%d", va_arg(apt, int));
			break;
		case 'f':
			printf("%f", va_arg(apt, double));
			break;
		case 's':
			str = va_arg(apt, char *);
			if (str)
				printf("%s", str);
			else
				printf("(nil)");
			break;
		}
		iformat++;

		if (*iformat)
			printf(", ");
	}
	printf("\n");
	va_end(apt);
}
