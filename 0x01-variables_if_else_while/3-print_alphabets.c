#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (successful)
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	putchar(l);

	for (l = 'A'; l <= 'Z'; l++)
	putchar(l);
	putchar('\n');

	return (0);

}
