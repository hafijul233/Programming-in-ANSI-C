#include <stdio.h>
#include <math.h>

int main()
{
  int i,j;

    printf("Patterns 1:\n");
    for(i=1;i<=5;i++){
      for(j=1;j<=i;j++){
        printf("%d ",i);
      }
      printf("\n");
    }

    printf("Patterns 2:\n");
    for(i=1;i<=5;i++){
      for(j=0;j<=i;j++){
        printf(" ");
      }
      for(j=0;j<=5-i;j++){
        printf("*");
      }
      printf("\n");
    }
    return 0;
}
