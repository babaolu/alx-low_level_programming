#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "Expect the best, Prepare for the worst, Capitalize \
on what comes.\n";

	char *ptr;

	printf("%s", str);
	ptr = leet(str);
	printf("%s", ptr);
	printf("%s", str);

	return (0);
}
