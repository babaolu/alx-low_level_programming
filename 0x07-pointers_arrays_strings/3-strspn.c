#include "main.h"

/**
 * _strspn - Gets length of prefix substring
 * @s: String to parse
 * @accept: String containing desired characters
 *
 * Return: Number of bytes of initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int num = 0;
	char *acc;

	while (*s)
	{
		acc = accept;
		while (*acc)
		{
			if (*s == *acc)
			{
				num++;
				break;
			}

			if (num > 0)
				return (num);
			acc++;
		}
		s++;
	}
	return (num)
}
