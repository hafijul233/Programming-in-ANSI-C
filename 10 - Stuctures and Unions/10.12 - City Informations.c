#include <stdio.h>
#include <stdlib.h>

#define MAXN 50

typedef struct census
{
    char city[23];
    long long int population;
    float literacy_level;
} Census;

Census cities[MAXN];
int current_index = 0;

void add_city();
void display_list();
void sort_city_asc();
void sort_population_asc();
void sort_literacy_asc();


int main()
{
    int choice;

    while(1)
    {
        printf("\tCity Database System\n    --------------------\n");
        printf("1 -> Enter a City Info\n");
        printf("2 -> Sort Using City Name\n");
        printf("3 -> Sort Using Literacy Level\n");
        printf("4 -> Sort Using Population\n");
        printf("0 -> Quit\n");
        printf("\n-------------------------------\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: add_city();
                break;

            case 2: sort_city_asc();
                break;

            case 3: sort_literacy_asc();
                break;

            case 4: sort_population_asc();
                break;

            case 0: exit(0);
                break;

            default: printf("Wrong Input! Try Again!!!\n");
                break;
        }
    }
    return 0;
}

void add_city()
{
    getchar();
    printf("\n\tEnter New City Information\n----------------------------------------\n");

    printf("Enter City Name: ");
        gets(cities[current_index].city);

    printf("Enter Literacy Level: ");
        scanf("%f",&cities[current_index].literacy_level);

    printf("Enter Population: ");
        scanf("%d",&cities[current_index].population);

    current_index++;

    printf("\n\t\t\tThank You.\n\tNew City Information Added Successfully.\n");
}

void display_list()
{
    int i;
    printf("\t\t\t\t\tSorted Cities Record Table\n");
    printf("\t\t-----------------------------------------------------------------------\n");
    printf("\t\t|SI|         City Name         |      Literacy     |     Population   |\n");
    printf("\t\t-----------------------------------------------------------------------\n");

    for(i = 0; i<current_index; i++) {
        printf("\t\t|%2d| %-23s   |   %-12.3f    |   %-15lld|\n",i+1,
                                                          cities[i].city,
                                                          cities[i].literacy_level,
                                                          cities[i].population);
        printf("\t\t-----------------------------------------------------------------------\n");
    }
}

void sort_city_asc()
{
    Census temp_city;
    int i, j;

    for (i = 0 ; i < current_index; i++) {
    for (j = 0 ; j < current_index - i - 1; j++)
    {
      if ((int)cities[j].city[0] > (int)cities[j+1].city[0])
      {
        temp_city = cities[j];
        cities[j] = cities[j+1];
        cities[j+1] = temp_city;
      }
    }
  }
  display_list();
}

void sort_population_asc()
{
    Census temp_city;
    int i, j;

    for (i = 0 ; i < current_index; i++) {
    for (j = 0 ; j < current_index - i - 1; j++)
    {
      if (cities[j].population > cities[j+1].population)
      {
        temp_city = cities[j];
        cities[j] = cities[j+1];
        cities[j+1] = temp_city;
      }
    }
  }
  display_list();
}

void sort_literacy_asc()
{
    Census temp_city;
    int i, j;

    for (i = 0 ; i < current_index; i++) {
    for (j = 0 ; j < current_index - i - 1; j++)
    {
      if (cities[j].literacy_level > cities[j+1].literacy_level)
      {
        temp_city = cities[j];
        cities[j] = cities[j+1];
        cities[j+1] = temp_city;
      }
    }
  }
  display_list();
}
