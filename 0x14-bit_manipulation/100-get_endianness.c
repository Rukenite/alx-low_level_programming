#include "main.h"

/**
 * get_endianness - check the endian status
 *
 * Return: 1 if big 0 if little
 */
int get_endianness(void)
{
	int numeric;

	numeric = 1;
	if (*(char *)&numeric == 1)
		return (1);
	else
		return (0);
}
