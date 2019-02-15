#include <stdio.h>
#include <stdlib.h>

typedef struct metric_unit
{
    float metres;
    float centimetres;

} Metric;


typedef struct british_unit
{
    float feets;
    float inches;

} British;



Metric british_to_metric (British input)
{
    Metric result;

    result.centimetres = 2.54 * input.inches;
    result.metres = 0.3048 * input.feets;

    return (result);
}

British metric_to_british (Metric input)
{
    British result;

    result.inches = 0.393701 * input.centimetres;
    result.feets = 3.28084 * input.metres;

    return (result);
}



int main()
{
    Metric metric1, british_version;
    British british1, metric_version;

    int choice;

    while(1)
    {
        printf("\tUnit Converter\n    --------------------\n");
        printf("Enter a Metric Length Unit(cm m): ");
        scanf("%f %f", &metric1.centimetres, &metric1.metres);

        printf("Enter a British Length Unit(in ft): ");
        scanf("%f %f", &british1.inches, &british1.feets);

        printf("Please Choose From Option\n");
        printf("1 - > Metric Unit\n");
        printf("2 - > British Unit\n");
        printf("Enter Choice: ");
        scanf("%d",&choice);

        if(choice == 1) {
            british_version = british_to_metric(british1);
            metric1.centimetres += british_version.centimetres;
            metric1.metres += british_version.metres;

            printf("Total Value in Metric Units\n");
            printf("Metre(s): %f \t Centimeter(s): %f\n",metric1.metres, metric1.centimetres);
        }

        else if(choice == 2) {
            metric_version = metric_to_british(metric1);
            british1.feets += metric_version.feets;
            british1.inches += metric_version.inches;

            printf("Total Value in British Units\n");
            printf("Feet(s): %f \t Inch(s): %f\n",british1.feets, british1.inches);
        }


        printf("\n\tWanna Enter another Date(1/0): ");
        scanf("%d",&choice);

        if(choice == 0)
            exit(0);
    }
    return 0;
}


