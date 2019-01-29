#include <stdio.h>
#include <stdlib.h>

void leap(int year)
{

    if ((year % 400) == 0)
        printf("%d is a leap year \n", year);

    else if ((year % 100) == 0)
        printf("%d is a not leap year \n", year);

    else if ((year % 4) == 0)
        printf("%d is a leap year \n", year);

    else
        printf("%d is not a leap year \n", year);
}


int main() {
    int year;
    printf("Enter year: ");
    scanf("%d",&year);

    leap(year);

    return 0;
}
