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
			return (evalInt(s, s + iter));
		iter++;
	}
	return (0);
}


/**
 * evalInt - Evaluate the Integer
 * @s: Original string
 * @charInt: starting point of the Integer
 *
 * Return: Evaluated integer.
 */
int evalInt(char *s, char *charInt)
{
	int siter, sign_val;
	int iter = 0;
	int val = 0;

	sign_val = 0;
		for (siter = 0; siter < (charInt - s); siter++)
	{
		if (s[siter] == '-')
			sign_val++;
	}

	while ((charInt[iter] >= '0') && (charInt[iter] <= '9'))
	{
		val *= 10;

		if (sign_val % 2 == 0)
			val += (charInt[iter] - '0');
		else
			val -= (charInt[iter] - '0');
		iter++;
	}

	return (val);
}
