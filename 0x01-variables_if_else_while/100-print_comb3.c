#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry execution
 * Return: Always 0 (successful)
 */

int main(void)
{
	int d, p;
	for (d = '0'; d <= '9'; d++)
	{
	for (p = 'd' + 1; p <= '9'; p++)
	{
	if (p != d)
	{
	putchar(d);
	putchar(p);
	if (p =='8' && '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	return (0);
