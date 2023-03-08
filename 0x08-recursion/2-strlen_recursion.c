#include "main.h"

/**
 * _strlen_recursion - Returns length of a string
 * @s: String to parse
 *
 * Return: Lenghth of string
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
