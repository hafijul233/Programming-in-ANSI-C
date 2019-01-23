#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long int polynomialserise(int arr[], int currentpos, int x,int siz){
    if(currentpos == 0)
        return  arr[currentpos]*x;
    else if(currentpos<siz && currentpos > 0)
        return x*(arr[currentpos]+polynomialserise(arr, currentpos-1,x,siz)); //For A1 to An-1
    else
        return arr[currentpos]+polynomialserise(arr, currentpos-1,x,siz); //For An
}

int main()
{
    int i, siz, x;

    printf("Enter Value of X: ");
    scanf("%d", &x);

    printf("Enter Size of X Co-efficients: ");
    scanf("%d", &siz);
    int arr[siz+1];
        siz--;
    for(i=0;i<=siz+1;i++){
        printf("Enter value of a%d: ",i);
        scanf("%d",&arr[i]);
    }

    printf("%d Order Polynomial = %lld",siz+1,polynomialserise(arr,siz,x,siz));

    return 0;
}
