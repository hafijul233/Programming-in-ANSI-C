#include <stdio.h>

int main()
{
  float number;
  int rmostd;

  printf("Enter a Float-point Number: ");
    scanf("%f",&number);

    rmostd = (int)number%10;
    printf("Right Most Digit: %d\n",rmostd);
    return 0;
}
