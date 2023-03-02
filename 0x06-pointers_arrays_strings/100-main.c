#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "ROT13 (\"rotate by 13 places\", somtimes hyphenated \
ROT-13) is a simple letter substitution cipher.\n";

	char *ptr;

	printf("%s", str);
	ptr = rot13(str);
	printf("%s", ptr);
	printf("%s", str);
	ptr = rot13(str);
	printf("%s", ptr);
	printf("%s", str);
	ptr = rot13(str);
	printf("%s", ptr);
	printf("%s", str);

	return (0);
}
