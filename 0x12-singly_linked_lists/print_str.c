/**
 * print_str - Prints a string
 * @str: String to print
 *
 * Return: Length of printed string
 * -1 if error occurs
 */
size_t print_str(char * str)
{
	size_t len = 0;

	if (!str)
		return (-1);
	while (*str)
	{
		if (_putchar(*str) < 0)
			return (-1);
		len++;
		str++;
	}

	return (len);
}
