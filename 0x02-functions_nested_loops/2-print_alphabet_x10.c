#include "holberton.h"

/**
 * print_alphabet_x10 - code uses _print_alphabet to print the alphabet x10
 *
 * print_alpabet - prints alphabet in lower case
 */

void print_alphabet_x10(void)
{
int i = 0;

for (i = 0; i <= 9; i++)
{
char i;

for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');

}
}
