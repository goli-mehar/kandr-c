#include <stdio.h>

/* converting farenheit to celsius ° C = (5/ 9) (° F − 32) */

main ()
{
  float farh, celsius;

  printf("%6s %10s\n", "farh", "celsius");

  for (farh = 0; farh <= 300; farh = farh + 20) {
    celsius = (5.0/9.0)*(farh - 32.0);
    printf("%6.0f %10.2f\n", farh, celsius);

  }

}
