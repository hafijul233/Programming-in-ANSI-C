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
    while(1)
    {
        printf("\tDate Formatter\n    --------------------\n");
        printf("Enter a Date(dd,mm,yyyy): ");
        scanf("%d,%d,%d", &new_date.day, &new_date.month, &new_date.year);

        if(new_date.month < 1 || new_date.month > 12)//when month value is wrong
        {
            printf("Month Value : %d is Invalid.\n",new_date.month);
        }

        else//month value is ok
        {
            if(new_date.month == 2)//If month is Feb
            {
                if(leap_year_check(new_date.year) == 1)
                    month_limit[1] = 29;

                else
                    month_limit[1] = 28;

                if((new_date.day < 1 )|| (new_date.day > month_limit[1]))//date doesn't match standard
                {
                    printf("%s has only %d Days on %d Year.\n",months[1],month_limit[1],new_date.year);
                }

                else
                {
                    printf("Entered Date: %s %d, %d\n",months[new_date.month - 1], new_date.day, new_date.year);
                }
            }

            else //else other 11 month
            {
                if(new_date.day <1 || new_date.day > month_limit[new_date.month - 1])
                {
                    printf("%s has only %d Days on %d Year.\n",months[new_date.month - 1],month_limit[new_date.month - 1],new_date.year);
                }
                else
                {
                    printf("Entered Date: %s %d, %d\n",months[new_date.month - 1], new_date.day, new_date.year);
                }

            }
        }

        printf("\n\tWanna Enter another Date(1/0): ");
        scanf("%d",&choice);

        if(choice == 0)
            exit(0);
    }
    return 0;
}

