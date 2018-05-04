#include <stdio.h>

int main()
{
  int number;
  int sum = 0;

  printf("Enter a Number: ");
    scanf("%d", &number);

    while(number>0){
      sum += number % 10;
      number /=10;
    }

    printf("Sum of Digits : %d\n", sum);

    return 0;
}
