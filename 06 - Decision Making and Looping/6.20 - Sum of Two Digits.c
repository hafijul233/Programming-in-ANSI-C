#include <stdio.h>

int main()
{
  int i, number, pos_sum =0, neg_sum=0, pos_cont=0, neg_cont=0;

    printf("Enter 10 two digits Numbers: ");
    for(i=0;i<10;i++){
      scanf("%d", &number);
      if(pos_sum<999 || neg_sum<999){
        if(number >= 0){
          pos_sum += number;
          pos_cont++;
        }
        else{
          neg_sum += number;
          neg_cont++;
        }
      }
      else{
        break;
      }
    }

    printf("Total Positive Numbers: %d\n",pos_cont);
    printf("Sum of Positive Numbers: %d\n",pos_sum);

    printf("Total Negative Numbers: %d\n",neg_cont);
    printf("Sum of Negative Numbers: %d\n",neg_sum);


    return 0;
}
