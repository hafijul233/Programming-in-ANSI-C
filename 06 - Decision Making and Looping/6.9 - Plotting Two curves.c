#include<stdio.h>
#include<math.h>

int main(){

int i,j,k,limit=80;

printf("\t\t\t\tY--->\n");
for(i=1;i<limit/2;i++){
  for(j=1;j<limit;j++){

    if(i==1)printf("-");

    if(j==1)printf("|");

    if(i==limit/4 && j==limit/2)printf("#");

    else printf("*");
  }
  printf("\n");
}


  return 0;
}
