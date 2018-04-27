#include <stdio.h>

int main()
{
    int number, multiper, result;
    number = 5;
    multiper = 1;
        while(multiper <=10){
            result = number * multiper;
            printf("%2d x %2d = %3d\n",number,multiper,result);
            multiper = multiper + 1;
        }
    return 0;
}
