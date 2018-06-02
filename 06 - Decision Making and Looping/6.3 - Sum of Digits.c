#include <stdio.h>

int main()
{
  int number, reminder, sum=0;

  printf("Enter a Number: ");
    scanf("%d",&number);

    while(number>0){
      reminder = number%10;
      sum+=reminder;
      number/=10;
    }

    printf("The Sum of Digits are: %d\n", sum);

    return 0;
}
