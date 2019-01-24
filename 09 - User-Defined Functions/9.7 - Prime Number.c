#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int prime(int n) {

    int proof = 1,i;
    if(n <= 1)
        proof = 0;

    else{
        for(i=2; i<=n;i++) {
            if(n%i == 0) {
                proof = 0;
                break;
            }
        }
    }

    return proof;
}


int main()
{
    int number,result;
    printf("Enter a Number: ");
    scanf("%d",&number);

    result = prime(number);

    if(result == 1)
        printf("%d is a Prime Number.\n",number);
    else
        printf("%d is not a Prime Number.\n",number);
    return 0;
}
