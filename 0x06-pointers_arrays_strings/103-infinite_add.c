#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: First number
 * @n2: Second number
 * @r: buffer to store the result
 * @size_r: Size of buffer
 *
 * Return: Pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, bigger, carry, num1, num2;
	char *pt = r;

	len1 = s_len(n1);
	len2 = s_len(n2);

	if (len1 > len2)
		bigger = len1;
	else
		bigger = len2;

	if (bigger >= size_r)
		return (0);

	r[size_r - 1] = '\0';
	carry = 0;
	size_r--;

	num1 = 0;
	num2 = 0;
	fill_func(n1, n2, &len1, &len2, r, pt, size_r, num1, num2, &carry);

	if (len1 || len2 || carry)
		return (0);
	return (r);
}


/**
 * s_len - Evaluate length
 * @s: String to evaluate
 *
 * Return: Length of string s.
 */
int s_len(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}

/**
 * fill_func - Implements adding logic
 * @n1: String 1
 * @n2: String 2
 * @l1: Length of n1
 * @l2: Length of n2
 * @r: Buffer
 * @pt: Point in buffer
 * @size_r: Size of buffer
 * @num1: Number for 1
 * @num2: Number for 2
 * @cry: Carry
 *
 * Return: Void (Nothing)
 */
void fill_func(char *n1, char *n2, int *l1, int *l2, char *r, char *pt,
	       int size_r, int num1, int num2, int *cry)
{

	int len1 = *l1;
	int len2 = *l2;
	int carry = *cry;

	while (size_r)
	{
		if (len1 && len2)
		{
			num1 = n1[len1 - 1] - '0';
			num2 = n2[len2 - 1] - '0';
			r[size_r - 1] = ((num1 + num2 + carry) % 10) + '0';
			carry = (num1 + num2 + carry) / 10;
			len1--;
			len2--;
		}
		else if (len1)
		{
			num1 = n1[len1 - 1] - '0';
			r[size_r - 1] = ((num1 + carry) % 10) + '0';
			carry = (num1 + carry) / 10;
			len1--;
		}
		else if (len2)
		{
			num2 = n2[len2 - 1] - '0';
			r[size_r - 1] = ((num2 + carry) % 10) + '0';
			carry = (num2 + carry) / 10;
			len2--;
		}
		else if (carry)
		{
			r[size_r - 1] = carry + '0';
			carry = carry / 10;
		}
		else
		{
			if (size_r)
			{
				while (r[size_r])
				{
					*pt = r[size_r];
					pt++;
					size_r++;
				}
				*pt = '\0';
				size_r = 1;
			}
		}
		size_r--;
	}
	*l1 = len1;
	*l2 = len2;
	*cry = carry;
}
