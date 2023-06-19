#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry execution
 * Return: Always 0 (successful)
 */
int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
	putchar(l);
	putchar('\n');

	return (0);
}	
