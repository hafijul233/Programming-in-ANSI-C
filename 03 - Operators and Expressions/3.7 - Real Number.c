#include <stdio.h>
#include <math.h>

int main()
{
  float real_number;

  int smallest, largest ;
    printf("Enter a Real Number: ");
      scanf("%f",&real_number);

      printf("Entered Number: %f\n",real_number);

      smallest = floor(real_number);
      printf("The Smallest Integer: %d\n", smallest);

      largest = ceil(real_number);
      printf("The Largest Integer: %d\n", largest);




    return 0;
}
