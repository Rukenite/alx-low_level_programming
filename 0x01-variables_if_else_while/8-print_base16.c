#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry execution
 * Return: always 0 (successfull)
 */
int main(void)
{
	int d;
	char l;

	for (d = '0'; d <= '9'; d++)
	putchar(d);

	for (l = 'a'; l <= 'f'; l++)
	putchar(l);
	putchar('\n');

	return (0);

}

