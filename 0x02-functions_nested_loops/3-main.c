#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = is_lower('H');
    _putchar(r + '0');
    r = is_lower('o');
    _putchar(r + '0');
    r = is_lower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
