#include <stdio.h>
#include <math.h>

int main()
{
  int a,b,c;
  float x, x1, x2, d;

    printf("ax^2+bx+c=0\n");
    printf("Enter Values of a, b,c: ");
      scanf("%d %d %d",&a,&b,&c);

      if(a == 0 && b == 0){
        printf("No Solutions\n");
      }

      else if(a == 0){
        x = ((-1.0)*c)/b;
          printf("There is Only One Root.\n Root X: %f\n",x);
      }
      else{
        d = (b*b)- 4*a*c;
        if(d >= 0){
          x1 = (-1)*b + sqrt(d)/2*a;
          x2 = (-1)*b - sqrt(d)/2*a;

          printf("There are Two Real Roots.\nX1: %f\nX2: %f\n",x1,x2);
        }
        else{
          printf("Ther are no Real Roots.\n");
        }
      }

    return 0;
}
