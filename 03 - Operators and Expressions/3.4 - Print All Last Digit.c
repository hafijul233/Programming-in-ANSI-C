#include <stdio.h>

int main()
{
    int number;
    int result,reminder;

    printf("Enter A Number: ");
    scanf("%d",&number);

    while(result!=0){
      result = number /10;
      printf("%d\n",result);
      number %=10;
    }

    return 0;
}
