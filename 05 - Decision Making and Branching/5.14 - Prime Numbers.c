#include <stdio.h>
#include <math.h>


/*
*If Single number then remove comment of printf() and scanf()
* Also Single Line comment in loop of Number
*/
int main()
{
  int number, i, limit, proof;

  /*printf("Enter a Number: ");
    scanf("%d",&number);*/

  for(number =0; number<=200; number++){
      proof = 0;
    if(number == 0 || number == 1){
      printf("%d is not a Prime Number\n",number);
    }

    else if(number == 2){
      printf("%d is a Prime Number\n",number);
    }

    else{
      limit = number;
        for(i=2;i<limit;i++){
          if(number%i == 0){
            proof = 1;
            break;
          }
        }

      if(proof == 1){
        printf("%d is not a Prime Number\n",number);
      }
      else{
        printf("%d is a Prime Number\n",number);
      }
    }
  }
    return 0;
}
