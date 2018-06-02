#include <stdio.h>

int main()
{
  int i,j,n;
  double m,c;
  long long sum_xi=0, sum_yi=0, sum_xiyi=0, sum_xi2=0, squ_x2i;

  printf("Enter Number Coordinates: ");
    scanf("%d", &n);
    int coordinates[2][n];

    for(i=0; i<2; i++){
      for(j=0; j<n; j++){
        if(i==0)printf("Enter X Coordinates: ");
        if(i==1)printf("Enter Y Coordinates: ");
        scanf("%d", &coordinates[i][j]);
      }
    }
      i=0;
    for(j=0; j<n; j++){
      sum_xi2+= (coordinates[0][j] * coordinates[0][j]);
      sum_xi+=coordinates[0][j];
      sum_yi+=coordinates[1][j];
      sum_xiyi+=(coordinates[0][j] * coordinates[1][j]);
    }

    squ_x2i = sum_xi * sum_xi;

    m = ((n*sum_xiyi)-(sum_xi*sum_yi))/((n*sum_xi2)-squ_x2i);

    c = (1.0/n)*(sum_yi-m*sum_xi);
    printf("The Straight Line Equation: Y=%0.4llfX+%0.4llf\n",m,c);
    return 0;
}
