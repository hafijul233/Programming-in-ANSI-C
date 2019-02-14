#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <windows.h>

void user_define_time();
void update_time();
void display_times();

struct time
{
    int hour;
    int minute;
    int second;

    int rec_hh;
    int rec_mm;
    int rec_ss;

};

struct time timeTable[100];
int counter = 0;

int main()
{
    char choice;
    while(1)
    {
        printf("\n\tTime Table Records\n     -----------------------\n");
        printf("\tPlease Choose From Options\n");
        printf("\t--------------------------\n");
        printf("\tM -> Enter Time Manually\n");
        printf("\tU -> Update Current Time\n");
        printf("\tD -> Display Times\n");
        printf("\tQ -> Quit\n");
        printf("\t--------------------------\n");
        printf("\tEnter Choice: ");
        scanf("%c", &choice);

        if(choice == 'M' || choice == 'm')
            user_define_time();

        else if(choice == 'U' || choice == 'u')
            update_time();

        else if(choice == 'D' || choice == 'd')
            display_times();

        else if(choice == 'Q' || choice == 'q')
            exit(0);

        else
            printf("Wrong Input.Try Again ??\n");

    //getch();
    }

    return 0;
}


void user_define_time()
{
    system("cls");
    time_t my_time;
    struct tm * timeinfo;
    int hh, mm, ss;

    time (&my_time);
    timeinfo = localtime (&my_time);

    printf("\n\tInsert Time\n");
    printf("Enter a Time(hh:mm:ss): ");
    scanf("%d:%d:%d",&hh, &mm, &ss);

    timeTable[counter].hour = hh;
    timeTable[counter].minute = mm;
    timeTable[counter].second = ss;
    timeTable[counter].rec_hh = timeinfo->tm_hour;
    timeTable[counter].rec_mm = timeinfo->tm_min;
    timeTable[counter].rec_ss = timeinfo->tm_sec;


    printf("Entered Time: %d:%d:%d\n\tThank You!",
           timeTable[counter].hour,
           timeTable[counter].minute,
           timeTable[counter].second);

    counter++;
}

void update_time()
{
    system("cls");
    time_t my_time;
    struct tm * timeinfo;

    time (&my_time);
    timeinfo = localtime (&my_time);

    timeTable[counter].hour = timeinfo->tm_hour;
    timeTable[counter].minute = timeinfo->tm_min;
    timeTable[counter].second = timeinfo->tm_sec;

    printf("\n\tInsert Time\n");
    printf("Entered Time: %d:%d:%d\n\tThank You!",
           timeTable[counter].hour,
           timeTable[counter].minute,
           timeTable[counter].second);

    counter++;
}

void display_times()
{
    system("cls");

    time_t my_time;
    struct tm * timeinfo;
    int i, hour, minute, second;

    time (&my_time);
    timeinfo = localtime (&my_time);

    hour = timeinfo->tm_hour;
    minute = timeinfo->tm_min;
    second = timeinfo->tm_sec;

    printf("\n");
    printf("\t\t----------------------\n");
    printf("\t\t|SI|       Time      |       Duration    |\n");
    printf("\t\t------------------------------------------\n");
    for(i=0; i<counter; i++)
    {
        printf("\t\t|%2d|    %2d:%2d:%2d     |    %2d:%2d:%2d     |\n",
               i+1,
               timeTable[i].hour,
               timeTable[i].minute,
               timeTable[i].second,
               timeTable[i].rec_hh - hour,
               timeTable[i].minute - minute,
               timeTable[i].second - second
               );
        printf("\t\t--------------------------------------------\n");
    }

}
