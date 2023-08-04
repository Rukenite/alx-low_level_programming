#include "main.h"

/**
 * flip_bits - flips bit thereby converting a number to another
 * @n: the first bit word
 * @m: the second bit word
 *
 * Return: the distance(number of bits need for the flip)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int move = (sizeof(n) * 8);
	int distance = 0;

	while (move--)
		distance += (n >> move & 1) != (m >> move & 1);
	return (distance);
}
