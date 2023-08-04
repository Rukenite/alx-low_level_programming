#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned integer
 * @b: character string
 * Return: converted decimal number or 0 if there is an unconvertable character
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int final, power;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (power = 1, final = 0, len--; len >= 0; len--, power *= 2)
	{
		if (b[len] == '1')
			final += power;
	}

	return (final);
}

