#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the bit
 * @index: index position to change
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int r;
	unsigned int drawer;

	if (index > 64)
		return (-1);
	drawer = index;
	for (r = 1; drawer > 0; r *= 2, drawer--)
		;

	if ((*n >> index) & 1)
		*n -= r;

	return (1);
}
