#include <stdio.h>

int main()
{
    int start=1, finish=1, large, small;

    while(start != 0  && finish != 0){

      int positive=0,negative=0, i;

      printf("Enter Start and Finish Range: ");
        scanf("%d %d",&start, &finish);

        if(start>large){
          large = start;
          small = finish;
        }

        else{
          large = finish;
          small = start;
        }

        for(i=small; i<=large;i++){
          if(i<0) negative++;
          if(i>0) positive++;
        }

        printf("Total Number of Positive between %d to %d= %d\n",start, finish, positive);
        printf("Total Number of Negative between %d to %d= %d\n\n",start, finish, negative);

    }

    return 0;
}
