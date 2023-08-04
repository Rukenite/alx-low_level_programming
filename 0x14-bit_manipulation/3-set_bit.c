#include "main.h"

/**
 * set_bit - sets bit on the index
 * @n: decimal number passed by a pointer
 * @index: index of the bit
 * Return: 1 (success) or -1(fail)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int r;

	if (index > 64)
		return (-1);

	for (r = 1; index > 0; index--, r *= 2)
		;
	*n += r;

	return (1);
}
