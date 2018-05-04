#include <stdio.h>

int main()
{
  int number_in,number_use=0;
  int temp, result, reminder;

  printf("Enter a Number: ");
  scanf("%d", &number_in);

  //reversing the number
    while(number_in>0){
      number_use = (number_use*10)+(number_in%10);
      number_in /=10;
    }

    //using
    while(number_use>0){
      temp = number_use;
        while(temp>0){
        result = temp % 10;
        printf("%d ",result);
        temp /= 10;
        }
        printf("\n");
      number_use = number_use/10;
    }

    return 0;
}
