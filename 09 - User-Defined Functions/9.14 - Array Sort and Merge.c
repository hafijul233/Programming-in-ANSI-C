#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>// Using NULL lib
#include <string.h>
#define MAXN 1000

int array1[MAXN];
int array2[MAXN];

int siz1, siz2;

//function prototypes
void read_arrays();
void sort_arrays();
void merge_arrays();
void bubble_sort(int arr[], int siz, int num);

int main()
{
    int choice;
    memset(array1, NULL, MAXN*sizeof(array1[0]));
    memset(array2, NULL, MAXN*sizeof(array2[0]));


    while(1)
    {
        printf("\n\tPlease Choose a Option\n");
        printf("\t----------------------\n");
        printf("\t1-> Add Arrays\n");
        printf("\t2-> Sort Arrays\n");
        printf("\t3-> Merge Arrays\n");
        printf("\n\t0-> Quit\n");

        printf("\nEnter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1 : read_arrays();
            break;

        case 2 : sort_arrays();
            break;

        case 3 : merge_arrays();
            break;

        case 0 : exit(0);
            break;

        default : printf("Wrong Input!.Please Try Again.\n");
            break;
        }
    }
    return 0;
}

void bubble_sort(int arr[], int siz, int num)
{
    int i, j, temp;

    for (i = 0; i < siz-1; i++) {
        for (j=0; j<siz-i-1; j++) {
            if(arr[j]> arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Sorted Array: ");
    for(i=0;i<siz;i++){
            if(num == 1)//Updating Global array1
                array1[i] = arr[i];
            else if(num == 2)//Updating Global array2
                array2[i] = arr[i];
            else
                printf("%d \t",arr[i]);
    }
    printf("\n");
}

void read_arrays()
{
    int i;

    //Read Array Size For Array 1
    printf("Enter Size of Array 1(size %c %d): ",243,MAXN);
        scanf("%d",&siz1);

    //Read Array Elements For Array 1
    printf("Enter Elements of Array 1: \n");
        for(i=0; i<siz1; i++)
            scanf("%d",&array1[i]);

    //Read Array Size For Array 2
    printf("Enter Size of Array 2(size %c %d): ",243,MAXN);
        scanf("%d",&siz2);

    //Read Array Elements For Array 2
    printf("Enter Elements of Array 2: \n");
        for(i=0; i<siz2; i++)
            scanf("%d",&array2[i]);

    printf("OUTPUT:\n==========\n\n");

    //Print All Elements of Array 1
    printf("Array 1: ");
    for(i=0; i<siz1; i++)
        printf("%d\t",array1[i]);

    //Print All Elements of Array 2
    printf("\n\nArray 2: ");
    for(i=0; i<siz2; i++)
        printf("%d\t",array2[i]);

    printf("\n");
}

void sort_arrays()
{

    /*if(array1[0] == NULL || array2[0] == NULL){//Checking Address Pointer is NULL
        printf("Arrays are Empty\n");
        read_arrays();
        sort_arrays();
    }
    else */
        printf("Sorting Array 1\n------------------\n");
            bubble_sort(array1,siz1,1);
        printf("Sorting Array 2\n------------------\n");
            bubble_sort(array2,siz2,2);
    //}
}

void merge_arrays()
{
    if(array1[0] == NULL || array2[0] == NULL){//Checking Address Pointer is NULL
        printf("Arrays are Empty\n");
        read_arrays();
        merge_arrays();
    }
    else {
        int i, counter = 0, total_len = siz1 + siz2;
        int merge_arr[total_len];

        for(i=0;i<siz1;i++){
            merge_arr[i] = array1[i];
            counter++;
        }

        for(i=counter; i<total_len; i++){
            merge_arr[i] = array2[i-counter];
        }

        printf("\nMerged Array:");
        for(i=0; i,total_len; i++) {
            printf("%d\t",merge_arr[i]);
        }
        printf("\n");
        bubble_sort(merge_arr,total_len,0);

    }

}
