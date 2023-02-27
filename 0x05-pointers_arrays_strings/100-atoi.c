#include "main.h"

/**
 * _atoi - Converts string to integer
 * @s: String to convert
 *
 * Return: resulting integer
 */
int _atoi(char *s)
{
	int iter = 0;

	while (s[iter])
	{
		if ((s[iter] >= '0') && (s[iter] <= '9'))
			return (evalInt(s + iter));
		iter++;
	}
	return (0);
}


/**
 * evalInt - Evaluate the Integer
 * @charInt: starting point of the Integer
 *
 * Return: Evaluated integer.
 */
int evalInt(char *charInt)
{
	int iter = 0;
	int val = 0;

	while ((charInt[iter] >= '0') && (charInt[iter] <= '9'))
	{
		val *= 10;
		val += (charInt[iter] - '0');
		iter++;
	}

	if (charInt[-1] == '-')
		return (-val);
	return (val);
}
