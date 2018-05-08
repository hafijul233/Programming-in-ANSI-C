#include <stdio.h>

int main()
{
  int number;
    printf("Enter a Number To Check: ");
      scanf("%d", & number);

    if(number % 2 == 0)printf("% is Even Number\n",number);
    if(number % 2 != 0) printf("%d is an Odd Number\n",number);

    return 0;
}
