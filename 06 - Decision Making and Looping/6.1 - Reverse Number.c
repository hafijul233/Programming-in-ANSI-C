#include <stdio.h>

int main()
{
  int number, reminder, reverse=0;

  printf("Enter a Number: ");
    scanf("%d",&number);

    while(number>0){
      reminder = number%10;
      reverse = reverse *10+reminder;
      number/=10;
    }

    printf("The reverse Number: %d\n", reverse);

    return 0;
}
