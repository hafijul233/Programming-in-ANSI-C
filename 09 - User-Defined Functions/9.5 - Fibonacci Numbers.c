#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned long long int fibo[200];

void fibonacci(int n)
{
    int i;
    fibo[0] = 0;
    fibo[1] = 1;
        n--;
    if(n>1){
        for(i=2; i<=n+1; i++){
            fibo[i] = fibo[i-1]+fibo[i-2];
        }
    }

    for(i=0; i<=n+1; i++){
        printf("\n%d - >%llu",i,fibo[i]);
    }
}

int main()
{
    int range;

    printf("Enter Fibonacci Series (Range <=200):");
    scanf("%d", &range);

    printf("\nFibonacci Numbers are: ");
        fibonacci(range);
    return 0;
}
