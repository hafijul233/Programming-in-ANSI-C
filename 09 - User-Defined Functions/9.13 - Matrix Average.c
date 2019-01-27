#include <stdio.h>
#include <stdlib.h>

int row = 5;//Initialize the array with define size C boundary
int col = 5;//variable will be change after user input size of matrix

void matrix_avg(float matrix[row][col]) {
    int i,j;
    float row_sum[col],col_sum[row];

    memset(row_sum, 0, col*sizeof(row_sum[0]));
    memset(col_sum, 0, row*sizeof(col_sum[0]));

    for(i=0; i<row; i++) {
        for(j=0; j<col; j++) {
            row_sum[i]+=matrix[i][j];
            col_sum[i]+=matrix[j][i];
        }
    }

    //display style
    for(i=0; i<=col; i++) {
        if(i == col)
            printf("\t     AVG");
        else
            printf("\t%10d",i+1);
    }

    printf("\n");

    for(i=0; i<=row; i++) {
        if(i == row)
            printf("AVG");
        else
            printf("%d",i+1);

        for(j=0; j<col; j++) {
            if(i == row)
                printf("\t%10.3f",col_sum[j]/row);//Every Column

            else
                printf("\t%10.3f",matrix[i][j]);
        }
        if(i == row)
           break;
        else
            printf("\t%10.3f\n",row_sum[i]/col);//Every Row
    }
}

int main()
{
    int i, j;
    float row_avg, col_avg,row_sum, col_sum;

    printf("Enter Number of Rows on Matrix: ");
    scanf("%d",&row);

    printf("Enter Number of Columns on Matrix: ");
    scanf("%d",&col);

    float matrix[row][col];

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("Value at [%d, %d]: ",i+1,j+1);
            scanf("%f",&matrix[i][j]);
        }
    }

    printf("\t\tAverage of Matrix\n\t-----------------------------\n");
    matrix_avg(matrix);

    return 0;
}
