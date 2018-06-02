#include <stdio.h>
#include <math.h>

int factorial(int num){

  int factor = num;

  while(num>1){
    factor*=--num;
  }
  return factor;
}


int main(){

  int i, x;
  double sum = 0;
  int factor;

  printf("Enter Maclaurin series Limit: ");
    scanf("%d", &x);

    printf("The sin(x) Value: ");

      for(i=1;i<=x;i+=2){
        factor = pow(x,i);
        sum+= factor/factorial(i);
      }

      printf("%llf\n",sum);


  return 0;
}
