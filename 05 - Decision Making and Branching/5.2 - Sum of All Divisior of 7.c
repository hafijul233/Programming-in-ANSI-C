#include <stdio.h>

int main()
{
  int i,j,number, max_range, min_range;
    int start, end, sum = 0;

    printf("Enter Range To Sum: ");
        scanf("%d %d", &start, &end);

        max_range = (start > end)?start : end ;
        min_range = (start < end)?start : end ;

        for(i = min_range; i<= max_range; i++){
          if(i % 7 == 0) {
            printf("%d ", i);
            sum += i;
          }
        }
        printf("\nSum of All Divisor of & Between %d to %d: %d\n", min_range, max_range, sum);


    return 0;
}
