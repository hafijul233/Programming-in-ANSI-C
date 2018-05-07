#include <stdio.h>

int main()
{
  int x,y,add,sub;

    printf("Enter Value of X and Y: ");
      scanf("%d %d",&x, &y);

      add = x + y;
      sub = x - y;

      printf("Expression (a):\n x+y \n----- = %f\n x-y\n",(float)add/sub);

      printf("\nExpression (b):\n x+y \n----- = %f\n  2 \n",(float)add/2);

      printf("\nExpression (c):\n (x+y)(x-y) = %f\n",(float)add*sub);

    return 0;
}
