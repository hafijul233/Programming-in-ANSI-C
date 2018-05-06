#include <stdio.h>

int main()
{
  /*
    * we will type cast operator  integer with float
    * Integer divided by integer output must be integer
    * In C Ex: 3/2= 1 in C but in Real World 3/2 = 1.5
    * For that We will Cast Integer Operator with float
    * So that integer divided by float is equal to float
  */

  int a,b,c;
  int sum;
  float average;

    printf("Enter Three Value: ");
      scanf("%d %d %d", &a, &b, &c);

    sum = a+b+c;

    average = sum/3;
    printf("Without Type Cast Average: %f\n",average);

    average = (float)sum/3;
    printf("With Type Cast Average: %f\n",average);





    return 0;
}
