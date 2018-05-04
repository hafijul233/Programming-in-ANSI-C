#include <stdio.h>

int main()
{

    int i;
    printf("ALL the even numbers between 1 to 100 is printed below\n");
    for(i=1;i<=100;i++){
        if(i%2 != 0) printf("%d, ",i);
    }
    return 0;
}
