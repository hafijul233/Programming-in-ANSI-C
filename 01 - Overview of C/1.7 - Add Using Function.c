#include <stdio.h>
void sub(int a, int b){
    int diff = a-b;
    printf("%d",diff);
}

void add(int a, int b){
    int sum = a+b;
    printf("%d",sum);
}

int main()
{
    add(10,20);
        printf("\n");
    sub(20,10);
    return 0;
}
