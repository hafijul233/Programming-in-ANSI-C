#include <stdio.h>

int main()
{
  int multd, multor;
  int x,y,p,r,s;
  printf("Enter Multiplicand (2 digit): ");
    scanf("%d", &multd);

  printf("Enter Multiplicator (2 digit): ");
    scanf("%d", &multor);

    x = multor/10;
    y = multor%10;

    printf("\n\t\t   %d\n",multd);
    printf("\t\t*  %d\n",multor);
      printf("\t      ----------\n");

    printf("    %d x %d is     %d\n",y,multd,y*multd);
    printf("    %d x %d is     %d\n",x,multd,x*multd);
      printf("\t      ----------\n");
    printf("    Add them     %d\n",multd*multor);
      printf("\t      ----------\n");


    return 0;
}
