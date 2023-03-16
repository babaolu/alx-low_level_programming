#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments to program
 * @ac: The number of arguments
 * @av: The arguments
 *
 * Return: Pointer to new concatenated string
 * NULL if failure
 */
char *argstostr(int ac, char **av)
{
	int len, iter, iter2;
	char *pstr, *piter;

	if (!ac)
		return (NULL);

	len = 0;
	for (iter = 0; iter < ac; iter++)
	{
		piter = av[iter];
		while (*piter)
		{
			len++;
			piter++;
		}
		len++;
	}

	pstr = (char *) malloc(sizeof(char) * (len + 1));
	if (!pstr)
		return (NULL);

	iter2 = 0;
	for (iter = 0; iter < ac; iter++)
	{
		piter = av[iter];
		while (*piter)
		{
			pstr[iter2] = *piter;
			iter2++;
			piter++;
		}
		pstr[iter2] = '\n';
		iter2++;
	}

	pstr[iter2] = '\0';

	return (pstr);
}

/**
 * _strlen - Length of string
 * @str: String under consideration
 *
 * Return: length of string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}
