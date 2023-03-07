#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: Pointer to which a value is set
 * @to: Value to be set
 *
 * Return: Void (Nothing)
 */
void set_string(char **s, char *to)
{
	*s = to;
}
