/* counting number of characters in a given input */

#include <stdio.h>

main()
{
  long nc;
  for (nc = 0; getchar() != EOF; nc++);
  printf( "%ld characters \n", nc);
}
