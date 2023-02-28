#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Check code
 *
 * Return: 0 (success)
 */
int main(void)
{
	char result[16];

	srand(time(NULL));

	sprintf(result, "%d", rand());

	execl("/root/alx-low_level_programming/0x05-pointers_arrays_\
strings/101-crackme", "101-crackme", result, (char *) NULL);

	return (0);
}
