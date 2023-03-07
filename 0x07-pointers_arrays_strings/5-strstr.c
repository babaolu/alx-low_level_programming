#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: String containing possible substring
 * @needle: Possible substring to find
 *
 * Return: Location of substring when found,
 * 0 if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int a;
	char *pt;
	char *hay;

	if (!(*needle))
		return (haystack);

	while (*haystack)
	{
		if (*haystack == *needle)
		{
			pt = needle;
			hay = haystack;
			while (*pt)
			{
				if (*pt != *haystack)
				{
					a = 0;
					haystack--;
					break;
				}
				a = 1;
				pt++;
				haystack++;
			}
			if (a)
				return (hay);
			hay = 0;
		}
		haystack++;
	}
	return (NULL);
}
