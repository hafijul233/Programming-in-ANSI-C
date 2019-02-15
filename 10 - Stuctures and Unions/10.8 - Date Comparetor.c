#include <stdio.h>
#include <stdlib.h>

typedef struct date
{
    int day;
    int month;
    int year;

} Date;


int date_compare(Date date1, Date date2)
{
    if(date1.year > date2.year)
        return 1;
    else if(date1.month > date2.month)
        return 1;
    else if(date1.day > date2.day)
        return 1;
    else
        return 0;
}

int main()
{
    Date date1,date2;
    int choice, result;
    while(1)
    {
        printf("\tDate Comparator\n    --------------------\n");
        printf("Enter a First Date(dd,mm,yyyy): ");
        scanf("%d, %d, %d", &date1.day,
              &date1.month,
              &date1.year);

        printf("Enter a Second Date(dd,mm,yyyy): ");
        scanf("%d, %d, %d", &date2.day,
              &date2.month,
              &date2.year);


        if(date_compare(date1, date2) == 1 )
        {
            printf("%d/%d/%d is Earlier then %d/%d/%d\n",date1.day,
                   date1.month,
                   date1.year,
                   date2.day,
                   date2.month,
                   date2.year);
        }
        else
        {
            printf("%d/%d/%d is Later then %d/%d/%d\n",date1.day,
                   date1.month,
                   date1.year,
                   date2.day,
                   date2.month,
                   date2.year);
        }
        printf("\n\tWanna Enter another Date(1/0): ");
        scanf("%d",&choice);

        if(choice == 0)
            exit(0);
    }
    return 0;
}

