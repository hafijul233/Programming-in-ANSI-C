#include <stdio.h>

int main()
{
  int number, factor;

  printf("Enter a Number: ");
    scanf("%d",&number);

    factor = number;

    while(number>1){
      factor = factor *(--number);
    }

    printf("The Factorial = %d\n", factor);

    return 0;
}
