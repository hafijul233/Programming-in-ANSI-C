#include <stdio.h>

int main()
{
  int number;
    printf("Enter a Number: ");
      scanf("%d",&number);

      if(number%2 == 0) printf("%d is a Even Number.\n",number);

      else printf("%d is a Odd Number.\n",number);

    return 0;
}
