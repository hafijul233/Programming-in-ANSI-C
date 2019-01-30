#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct time {
    int hour;
    int minute;
    int second;
};

struct time logins[100];
int counter = 0;

void user_define_time();
void system_time();
void display_times();

int main()
{
    char choice;
    while(1) {
    printf("\n\tPlease Choose From Options\n");
    printf("\t--------------------------\n");
    printf("\tM -> Enter Time Mannualy\n");
    printf("\tS -> Enter System Time\n");
    printf("\tD -> Display Times\n");
    printf("\tQ -> Quit\n");
    printf("\t--------------------------\n");
    printf("\t\tEnter Choice: ");
        scanf("%c", &choice);

    if(choice == 'M' || choice == 'm')
        user_define_time();

    else if(choice == 'S' || choice == 's')
        system_time();

    else if(choice == 'D' || choice == 'd')
        display_times();

    else if(choice == 'Q' || choice == 'q')
        exit(0);

    else
        printf("Wrong Input.Try Again ??\n");

    printf("\n\n\tCurrent Counter:%d\n",counter);
    }

    return 0;
}


void user_define_time() {
    int hh, mm, ss;
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

void system_time() {

    time_t my_time;
    struct tm * timeinfo;

    time (&my_time);
    timeinfo = localtime (&my_time);

    logins[counter].hour = timeinfo->tm_hour;
    logins[counter].minute = timeinfo->tm_min;
    logins[counter].second = timeinfo->tm_sec;

    printf("Entered Time: %d:%d:%d\n\tThank You!",
           logins[counter].hour,
           logins[counter].minute,
           logins[counter].second);

    counter++;
}

void display_times() {
    int i;
    printf("\n");
    printf("\t\t----------------------\n");
    printf("\t\t|SI|       Time      |\n");
    printf("\t\t----------------------\n");
    for(i=0; i<counter; i++) {
        printf("\t\t|%2d|    %2d:%2d:%2d     |\n",
               i,
               logins[i].hour,
               logins[i].minute,
               logins[i].second);
        printf("\t\t----------------------\n");
    }

}
