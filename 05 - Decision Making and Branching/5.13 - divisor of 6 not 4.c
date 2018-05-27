#include <stdio.h>

int main()
{
  int i, sum =0;

  for(i=0;i<=100;i++){
    if(i%6 == 0 && i%4 != 0){
      sum+=i;
    }
  }
  printf("Sum of all divisor of 6 between0 to 100: %d\n",sum);

    return 0;
}
