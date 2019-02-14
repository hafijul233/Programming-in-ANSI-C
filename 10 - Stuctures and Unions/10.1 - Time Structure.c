#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

struct time
{
    int hour;
    int minute;
    int second;
};


int main()
{
    char choice;
    struct time logins[100];
    int i, counter = 0, hh, mm, ss;


    while(1)
    {
        printf("\n\tTime Structure Program\n    -------------------------------");
        printf("\n\tPlease Choose From Options\n");
        printf("\t--------------------------\n");
        printf("\tE -> Enter Time\n");
        printf("\tD -> Display Times\n");
        printf("\tQ -> Quit\n");
        printf("\t--------------------------\n");
        printf("\tEnter Choice: ");
        scanf("%c", &choice);

        if(choice == 'E' || choice == 'e')
        {
            system("cls");
            printf("\tEnter Time Value\n    -------------------------\n");
            printf("Enter a Time(hh:mm:ss): ");
            scanf("%d:%d:%d",&hh,&mm,&ss);

            logins[counter].hour = hh;
            logins[counter].minute = mm;
            logins[counter].second = ss;

            printf("Entered Time: %d:%d:%d\n\tThank You!",
                   logins[counter].hour,
                   logins[counter].minute,
                   logins[counter].second);

            counter++;
        }

        else if(choice == 'D' || choice == 'd')
        {
            system("cls");
            printf("\tAll Recorded Time List\n");
            printf("\t\t----------------------\n");
            printf("\t\t|SI|       Time      |\n");
            printf("\t\t----------------------\n");
            for(i=0; i<counter; i++)
            {
                printf("\t\t|%2d|    %2d:%2d:%2d     |\n",
                       i+1,
                       logins[i].hour,
                       logins[i].minute,
                       logins[i].second);
                printf("\t\t----------------------\n");
            }

        }

        else if(choice == 'Q' || choice == 'q')
            exit(0);

        else
            printf("Wrong Input.Try Again ??\n");
    }

    return 0;
}
