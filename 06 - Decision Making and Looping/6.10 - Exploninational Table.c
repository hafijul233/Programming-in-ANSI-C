#include <stdio.h>
#include <math.h>

int main()
{
  int k,l;

  float i,j;
  double x,y,temp;

  for(k=-1;k<=9;k++){
    for(l=1;l<=9;l++){
        if(k==0 && l==1) printf("    X    ");
        if(k==0)printf("    0.%d    ",l);
        if(l==1)printf("    %d.0    ",k);
        else{
          for(i=0; i<=9.0; i=i+1.0){
            for(j=0.1; j<=0.9; j=j+0.1){
            y=exp(i+j);
          }
        }
      }
    }
    printf("\n");
  }
    return 0;
}
