#include <stdio.h>

int main()
{
  /*https://en.wikipedia.org/wiki/Right_triangle
  *    |\
  *    | \
  *HYP |  \opp
  *    |   \
  *    -----
  *     Adj
  */
  int hyp,adj,opp;
  int temp1, temp2;


    printf("Enter Hypotenuse (a): ");
      scanf("%d",&hyp);

    printf("Enter Adjacent (b): ");
      scanf("%d",&adj);

    printf("Enter Opposite (c): ");
      scanf("%d",&opp);

    temp1 = opp*opp;
    temp2 = adj*adj + hyp*hyp;

    if(temp1 == temp2){
      printf("This is a Right Angle Triangle\n");
    }

    else{
      printf("This is not a Right Angle Triangle\n");
    }


    return 0;
}
