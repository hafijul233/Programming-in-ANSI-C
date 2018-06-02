#include <stdio.h>

int main()
{
  int integer;
  int binary[1000]={0};
  int counter=0, i ,j;

  printf("Enter A Integer Number: ");

  scanf("%d",&integer);

    while(integer>0){

      if(integer%2 == 0)binary[counter] = 0;

      else binary[counter] = 1;

      counter++;
      integer/=2;
    }

    printf("Binary Equivalent value: ");
    for(i=counter-1;i>=0;i--){
      printf("%d",binary[i]);
    }

    return 0;
}
