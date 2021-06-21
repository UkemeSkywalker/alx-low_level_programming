#include <stdio.h>
#include <ctype.h>

int main(void)
{
  char X ;
  
  for ( X = 'A'; X <= 'Z'; X++)
    {
      putchar(X);
    }
  
  for ( X = 'A'; X<= 'Z'; X++)
    {
      putchar(tolower(X));
    }
  putchar(' ');
  return (0);

    }
