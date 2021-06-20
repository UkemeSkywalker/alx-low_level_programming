#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char charType;
int intType;
long longType;
double doubleType;
float floatType;
 
printf("Size of char: %zu\n", sizeof(charType));
printf("Size of an int: %zu\n", sizeof(intType));
printf("Size of a long int: %zu\n", sizeof(longType));
printf("Size of a long long int: %zu\n", sizeof(doubleType));
printf("Size of a float: %zu\n", sizeof(floatType));

return (0);
}
  
