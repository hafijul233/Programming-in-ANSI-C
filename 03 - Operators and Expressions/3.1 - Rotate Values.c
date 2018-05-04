#include <stdio.h>

int main()
{
    int x,y,z, temp;
    printf("Enter values of X, Y andZ to Rotate: ");
      scanf("%d %d %d",&x, &y,&z);

      printf("Before Rotation:\nX:%d\tY:%d\tZ:% d\n",x,y,z);

      //Solution-1: (Fun)
      printf("After Rotation:\nX:%d\tY:%d\tZ:%d\n",y,z,x);
      //Solution-2: (Real one)
      temp = x;//swap value of x and y
         x = y;
         y = temp;
         y = z;//swap value of y and z
         z=temp;

      printf("After Rotation:\nX:%d\tY:%d\tZ:%d\n",x,y,z);


    return 0;
}
