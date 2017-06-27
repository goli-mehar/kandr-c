#include <stdio.h>

/* converting farenheit to celsius ° C = (5/ 9) (° F − 32) */

#define INITIAL 0
#define STEP 20
#define FINAL 300

main ()
{
  float farh, celsius;

  printf("%6s %10s\n", "farh", "celsius");

  for (farh = INITIAL; farh <= FINAL; farh = farh + STEP) {
    celsius = (5.0/9.0)*(farh - 32.0);
    printf("%6.0f %10.2f\n", farh, celsius);

  }

}
