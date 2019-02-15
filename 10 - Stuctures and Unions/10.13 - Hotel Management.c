#include <stdio.h>
#include <stdlib.h>

#define MAXN 50

typedef struct hotel
{
    char name[50];
    char address[200];
    float grade;
    float room_charge;
    int total_rooms;

} Hotel;

Hotel hotel_list[MAXN];
int current_index = 0;

void add_hotel_info();
void display_list(Hotel hotels[], int range);
void find_grade_asc();
void find_room_charge_asc();


int main()
{
    int choice;

    while(1)
    {
        printf("\tCity Database System\n    --------------------\n");
        printf("1 -> Enter a Hotel Info\n");
        printf("2 -> Find Hotels with Grade\n");
        printf("3 -> Find Hotels with Charge\n");
        printf("0 -> Quit\n");
        printf("\n-------------------------------\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: add_hotel_info();
                break;

            case 2: find_grade_asc();
                break;

            case 3: find_room_charge_asc();
                break;

            case 0: exit(0);
                break;

            default: printf("Wrong Input! Try Again!!!\n");
                break;
        }
    }
    return 0;
}

void add_hotel_info()
{
    getchar();
    printf("\n\tEnter New Hotel Information\n----------------------------------------\n");

    printf("Enter Name: ");
        gets(hotel_list[current_index].name);

    printf("Enter Address: ");
        gets(hotel_list[current_index].address);

    printf("Enter Grade Level(Ex: 4.5): ");
        scanf("%f",&hotel_list[current_index].grade);

    printf("Enter Room Charge(Ex: 965.66): ");
        scanf("%f",&hotel_list[current_index].room_charge);

    printf("Enter Total Rooms: ");
        scanf("%d",&hotel_list[current_index].total_rooms);

    current_index++;

    printf("\n\t\t\tThank You.\n\tNew Hotel Information Added Successfully.\n");
}

void display_list(Hotel hotels[], int range)
{
    int i;
    printf("\t\t\t\t\tSorted Hotels Record Table\n");
    printf("\t\t--------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t|SI|         Hotel Name        |      Address                                  | Grade |  Room Charge  |   Rooms   |\n");
    printf("\t\t--------------------------------------------------------------------------------------------------------------------\n");
    for(i = 0; i<range; i++) {
        printf("\t\t|%2d| %-23s   |   %-40s    | %-5.1f | %11.2f   | %9d |\n",i+1,
                                                          hotel_list[i].name,
                                                          hotel_list[i].address,
                                                          hotel_list[i].grade,
                                                          hotel_list[i].room_charge,
                                                          hotel_list[i].total_rooms);
        printf("\t\t------------------------------------------------------------------------------------------------------------------------\n");
    }
}

void find_grade_asc()
{
    Hotel grade_hotels[current_index+1], temp;
    int i, j, index = 0;
    float grades;
    printf("Enter Grade Point To Search: ");
        scanf("%f",&grades);

    for(i = 0; i< current_index; i++) {
        if(hotel_list[i].grade == grades){
           grade_hotels[index++] = hotel_list[i];
        }
    }

    if(index == 0) {
        printf("No Hotel Avaliable in this Grade Point\n");
    }
    else {
        for (i = 0 ; i < index; i++) {
            for (j = 0 ; j < index - i - 1; j++) {
                if (grade_hotels[j].room_charge > grade_hotels[j+1].room_charge) {
                    temp = grade_hotels[j];
                    grade_hotels[j] = grade_hotels[j+1];
                    grade_hotels[j+1] = temp;
                }
            }
        }
        display_list(grade_hotels, index);
    }
}

void find_room_charge_asc()
{
    Hotel charge_hotels[current_index+1], temp;
    int i, j, index = 0;
    float charge;

    printf("Enter Room Charge To Search: ");
        scanf("%f",&charge);

    for(i = 0; i< current_index; i++) {
        if(hotel_list[i].room_charge <= charge){
           charge_hotels[index++] = hotel_list[i];
        }
    }

    if(index == 0) {
        printf("No Hotel Avaliable in this Average Room Charge\n");
    }
    else {
        for (i = 0 ; i < index; i++) {
            for (j = 0 ; j < index - i - 1; j++) {
                if (charge_hotels[j].room_charge > charge_hotels[j+1].room_charge) {
                    temp = charge_hotels[j];
                    charge_hotels[j] = charge_hotels[j+1];
                    charge_hotels[j+1] = temp;
                }
            }
        }
        display_list(charge_hotels, index);
    }
}
