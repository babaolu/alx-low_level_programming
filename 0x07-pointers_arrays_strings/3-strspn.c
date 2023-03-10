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
	int check = 0;
	char *acc;

	while (*s)
	{
		acc = accept;
		check = 0;
		while (*acc)
		{
			if (*s == *acc)
			{
				num++;
				check++;
				acc++;
				break;
			}
			acc++;
		}
		if (num && !check)
			return (num);

		s++;
	}
	return (num);
}
