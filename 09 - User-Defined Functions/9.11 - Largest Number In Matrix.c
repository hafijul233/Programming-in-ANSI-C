#include <stdio.h>
#include <stdlib.h>

int row = 5;//Initialize the array with define size C boundary
int col = 5;//variable will be change after user input size of matrix

int largest_number(int arr[row][col])
{
    int i, j, largest = arr[0][0];

    for(i=0; i<row; i++) {
        for(j=0; j<col; j++){
            if(largest < arr[i][j])
                largest = arr[i][j];
        }
    }

    return largest;
}

int main()
{
    int i, j, large;

    printf("Enter Number of Rows on Matrix: ");
        scanf("%d",&row);

    printf("Enter Number of Columns on Matrix: ");
        scanf("%d",&col);

    int arr[row][col];

    for(i=0; i<row; i++) {
        for(j=0; j<col; j++) {
            printf("Enter Value at Position[%d, %d]: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }

    large = largest_number(arr);
    printf("Largest Number On This Matrix = %d\n",large);

    return 0;
}
