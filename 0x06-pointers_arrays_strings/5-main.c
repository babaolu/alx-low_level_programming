#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "Look up!\n";
	char *ptr;

	printf("%s", str);
	ptr = string_toupper(str);
	printf("%s", ptr);
	printf("%s", str);

	return (0);
}
