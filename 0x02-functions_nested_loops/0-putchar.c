#include "main.h"

/**
 * main - Entry point of program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char putArr[] = { '_', 'p', 'u', 't', 'c', 'h', 'a', 'r' };
	unsigned int n = 0;

	while (n < (sizeof(putArr)/sizeof(char)))
	{
		_putchar(putArr[n]);
		n++;
	}
	_putchar('\n');

	return (0);
}
