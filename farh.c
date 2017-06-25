#include <stdio.h>

/* converting farenheit to celsius ° C = (5/ 9) (° F − 32) */

main ()
{
  float farh, celsius;
  int lower, upper, step;

  step = 20;
  lower = 0;
  upper = 300;

  farh = lower;

  printf("%6s %10s\n", "farh", "celsius");

  while (farh <= upper) {
    celsius = (5.0/9.0)*(farh - 32.0);
    printf("%6.0f %10.2f\n", farh, celsius);
    farh = farh + step;
  }

}
