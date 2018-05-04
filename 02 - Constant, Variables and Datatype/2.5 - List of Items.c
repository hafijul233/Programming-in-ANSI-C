#include <stdio.h>

int main()
{
    float rice_price, sugar_price;

      printf("Enter Rice/kg price: ");
        scanf("%f", &rice_price);

      printf("Enter Sugar/kg price: ");
        scanf("%f", &sugar_price);

      printf("***LIST OF ITEMS***\n");
      printf("Item\tPrice\n");
      printf("Rice\tRs %0.2f\n",rice_price);
      printf("Sugar\tRs %0.2f\n",sugar_price);


    return 0;
}
