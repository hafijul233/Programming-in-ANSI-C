#include <stdio.h>
#include <stdlib.h>

typedef struct date
{
    int day;
    int month;
    int year;

} Date;

char months[12][10] = {"January", "February", "March", "April", "May", "June","July",
                       "August", "September", "October", "November", "December"
                      };

int month_limit[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

Date next_date(Date current, int range)
{
    Date next;

    next.year = range /365;
    range%=365;

    next.month = range /30;
    range%=30;

    next.day = range;
//    printf("\nRange:\nDays: %d\tMonths: %d\tYears: %d\n",next.day,next.month,next.year);

    //Adding the date with input date
    current.year += next.year;
    current.month += next.month;
    current.day += next.day;

    if(current.day > month_limit[current.month - 1]) {
        current.day -= month_limit[current.month - 1];
        current.month++;
    }

    if(current.month > 12) {
        current.month -= 12;
        current.year++;
    }

    return (current);
}

int main()
{
    Date input_date,result_date;
    int choice, range;
    while(1)
    {
        printf("\tNext Date Finder\n    --------------------\n");
        printf("Enter a Date(dd,mm,yyyy): ");
        scanf("%d, %d, %d", &input_date.day,
                            &input_date.month,
                            &input_date.year);

        printf("Enter Next Date Range(days): ");
        scanf("%d",&range);

        result_date = next_date(input_date, range);//retreiving the update date


        printf("Next Date Will be : %s %d, %d\n",months[result_date.month - 1], result_date.day, result_date.year);

        printf("\n\tWanna Enter another Date(1/0): ");
        scanf("%d",&choice);

        if(choice == 0)
            exit(0);
    }
    return 0;
}

