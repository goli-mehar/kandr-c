/* reading input and printing it as an output */

#include <stdio.h>

main ()
{
  int c;

  while ((c = getchar()) != EOF) {
    putchar(c);
  }
}
