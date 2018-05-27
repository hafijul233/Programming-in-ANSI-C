#include <stdio.h>

int main()
{
  int x, y;
  printf("Enter value of X: ");
    scanf("%d",&x);

    if(x > 0) {
        y = 1;
        printf("X = %d\nValue of Y = %d\n",x, y);
    }

    else if(x == 0) {
        y = 0;
        printf("X = %d\nValue of Y = %d\n",x, y);
    }

    else {
        y = -1;
        printf("X = %d\nValue of Y = %d\n",x, y);
    }

    return 0;
}
