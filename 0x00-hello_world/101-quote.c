#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - Entry point of the program
 *
 * Return: Always zero
 */
int main(void)
{
	char *my_str = "and that piece of art is useful\" - \
Dora Korpar, 2015-10-19\n";

	write(2, my_str, strlen(my_str));

	return (1);
}
