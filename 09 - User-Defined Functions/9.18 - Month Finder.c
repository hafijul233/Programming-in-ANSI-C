#include <stdio.h>
#include <stdlib.h>

void month_finder(int month) {

    switch(month) {
        case 1 : printf("January");
            break;

        case 2 : printf("February");
            break;

        case 3 : printf("March");
            break;

        case 4 : printf("April");
            break;

        case 5 : printf("May");
            break;

        case 6 : printf("June");
            break;

        case 7 : printf("July");
            break;

        case 8 : printf("August");
            break;

        case 9 : printf("September");
            break;

        case 10 : printf("October");
            break;

        case 11 : printf("November");
            break;

        case 12 : printf("December");
            break;

        default : printf("Unknown");
            break;
    }
}


int main() {
    int date, month, year;
    printf("Enter Your date : (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &date, &month, &year);

    printf("Long Format Date: ");
    printf("%d ",date);
        month_finder(month);
    printf(", %d\n", year);

    return 0;
}
