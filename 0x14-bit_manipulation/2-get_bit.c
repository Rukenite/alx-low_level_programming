#include "main.h"

/**
 * get_bit - gets a bit at nth index
 * @n: binary number to be evaluated
 * @index: nth position
 *
 * Return: bit at that position
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int drawer;

	if (index > 64)
		return (-1);

	drawer = n >> index;

	return (drawer & 1);
}
