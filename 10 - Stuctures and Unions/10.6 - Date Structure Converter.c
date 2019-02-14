//Confused
#include <stdio.h>
#include <stdlib.h>

struct date
{
    int day;
    int month;
    int year;

};

char months[12][10] = {"January", "February", "March", "April", "May", "June","July",
                        "August", "September", "October", "November", "December"};

int month_limit[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int leap_year_check (int year)
{
    if (year%400 == 0) return 1; //yes

    else if (year%100 == 0) return 0;//no

    else if (year%4 == 0) return 1;//yes

    else return 0;
}

int main()
{
    struct date new_date;
    int choice;
    int date;
    while(1)
    {
        printf("\tDate Converter\n    --------------------\n");
        printf("Enter a Date(yyyymmdd): ");
        scanf("%d", &date);

        new_date.year = date / 10000; //for year
        date%=10000;

        new_date.month = date / 100; // for month
        date%=100;

        new_date.day = date ; // for day

        printf("Entered Date: %s %d, %d\n",months[new_date.month - 1], new_date.day, new_date.year);

        printf("\n\tWanna Enter another Date(1/0): ");
        scanf("%d",&choice);

        if(choice == 0)
            exit(0);
    }
    return 0;
}

