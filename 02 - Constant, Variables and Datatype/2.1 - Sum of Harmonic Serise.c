#include <stdio.h>

int main()
{
    int n, i;
    double sum = 1;
    printf("Enter Nth Range of Harmonic Series: ");
        scanf("%d",&n);
    for(i=2;i<=n;i++){
        sum+=1/(double)i;
    }

    printf("The Sum of %d elements in Harmonics Series is : %lf\n",n,sum);
    return 0;
}
