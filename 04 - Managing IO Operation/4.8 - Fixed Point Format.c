#include <stdio.h>

int main()
{
  double value;
    printf("Enter a Fraction Value: ");
      scanf("%lf", &value);

      printf("\n");
      printf("Fixed Point with 2 Decimal %0.2lf\n",value);
      printf("Fixed Point with 2 Decimal %0.5lf\n",value);
      printf("Fixed Point with 2 Decimal %0.0lf\n",value);

    return 0;
}
