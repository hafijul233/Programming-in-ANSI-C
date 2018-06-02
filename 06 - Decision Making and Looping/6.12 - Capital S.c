#include <stdio.h>

int main()
{
  int i, j;

  for(i=0; i<15; i++){
    for(j=0; j<18; j++){
      if(i==3 ||i==4 ||i==5){
         if(j==4)
            break;
        else printf("*");
      }
      else if(i==9 ||i==10 ||i==11){

         if(j>=13 && j<=17) printf("*");
        else printf(" ");

      }

      else printf("*");
    }
    printf("\n");
  }
    return 0;
}
