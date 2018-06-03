#include <stdio.h>

int main()
{
  int siz, i, j, k;
    printf("Enter Size of Square Matrix: ");
      scanf("%d",&siz);

  int matrixA[siz][siz], matrixB[siz][siz], matrixC[siz][siz];

  printf("\nEnter Values For Matrix A: ");
    for(i=0;i<siz;i++){
      for(j=0;j<siz;j++){
        printf("Position (%d, %d): ",i+1,j+1);
        scanf("%d",&matrixA[i][j]);
      }
    }

  printf("\nEnter Values For Matrix B: ");
    for(i=0;i<siz;i++){
      for(j=0;j<siz;j++){
        printf("Position (%d, %d): ",i+1,j+1);
        scanf("%d",&matrixB[i][j]);
      }
    }

    for(i=0;i<siz;i++){
      for(j=0;j<siz;j++){
        matrixC[i][j]=0;
      }
    }

    for(i=0;i<siz;i++){
      for(j=0;j<siz;j++){
        for(k=0;k<siz;k++){
          matrixC[i][j]+=matrixA[i][k]*matrixB[k][j];
        }
      }
    }

  printf("\nMultiplicated Matrix C:\n");
    for(i=0;i<siz;i++){
        printf("\t|");
      for(j=0;j<siz;j++){
        printf("%6d",matrixC[i][j]);
      }
      printf("\t|\n");
    }



    return 0;
}
