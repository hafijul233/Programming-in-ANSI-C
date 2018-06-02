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

  double sum = 1.0;
  int limit, i;

  printf("Enter Nth Limit of Eular's Number: ");
    scanf("%d", &limit);

    for(i=1;i<=limit;i++){
      sum +=((double)1/factorial(i));
    }

  printf("Sum of Eular's Number: %llf\n",sum);
  return 0;
}
