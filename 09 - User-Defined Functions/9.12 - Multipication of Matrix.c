#include <stdio.h>
#include <stdlib.h>

int row = 5;//Initialize the array with define size C boundary
int col = 5;//variable will be change after user input size of matrix

void martix_multipication(int arr1[row][col], int arr2[row][col])
{
    int i, j, k;
    int arr[row][col];

    //First Set All Values of Arr(Result array) to 0 to escap garbase value
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
            arr[i][j] = 0;
    }

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            for(k=0; k<row; k++)
            {
                arr[i][j]+= arr1[i][k]*arr2[k][j];
            }
        }
    }

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int i, j, large;

    printf("Enter Number of Rows on Matrix: ");
    scanf("%d",&row);

    printf("Enter Number of Columns on Matrix: ");
    scanf("%d",&col);

    int arr1[row][col], arr2[row][col];

    printf("Enter Values of Matrix A:\n");

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("Value at [%d, %d]: ",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("Enter Values of Matrix B:\n");

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("Value at [%d, %d]: ",i+1,j+1);
            scanf("%d",&arr2[i][j]);
        }
    }

    printf("Matrix Multiplication Result:\n");

    martix_multipication(arr1,arr2);

    return 0;
}
