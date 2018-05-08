#include <stdio.h>

int main()
{
  double value;
    printf("Enter a Number: ");
      scanf("%lf",&value);

      printf("Exponential with 2 Decimal: %0.2e\n",value);
      printf("Exponential with 4 Decimal: %0.4e\n",value);
      printf("Exponential with 8 Decimal: %0.8e\n",value);

    return 0;
}
