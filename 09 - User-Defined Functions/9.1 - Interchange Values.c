#include <stdio.h>
#include <stdlib.h>

int a, b;

void exchange(int x ,int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    a = x;
    b = y;
}

int main ()
{
    printf("Enter Two Integer Number: ");
    scanf("%d %d", &a, &b);

    printf("Before Swap a : %d & b : %d\n",a,b);
    exchange(a,b);
    printf(" After Swap a : %d & b : %d",a,b);

    return 0;
}
