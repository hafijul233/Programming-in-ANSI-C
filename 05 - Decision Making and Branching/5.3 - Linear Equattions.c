#include <stdio.h>

int main()
{
  int a, b, c, d, m, n, x1, x2, sub;

    printf("ax1+bx2 = m\n");
    printf("Enter Value of (a): ");
      scanf("%d",&a);
    printf("Enter Value of (b): ");
      scanf("%d",&b);
    printf("Enter Value of (m): ");
      scanf("%d",&m);

    printf("cx1+dx2 = n\n");
    printf("Enter Value of (c): ");
      scanf("%d",&c);
    printf("Enter Value of (d): ");
      scanf("%d",&d);
    printf("Enter Value of (n): ");
      scanf("%d",&n);

      sub = (a*d)-(c*b);

      if(sub <= 0) printf("Divided by Zero Inappropriate\n");

      else {
        x1 = ((m*d)-(b*n)/sub);
        x2 = ((n*a)-(m*c)/sub);
        printf("\nSolution of X1: %d \nSolution of X2: %d \n",x1,x2);
      }

    return 0;
}
