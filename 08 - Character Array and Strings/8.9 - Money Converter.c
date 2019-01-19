#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main()
{
    char singles[][10] ={"/",
                         "ONE",
                         "TWO",
                         "THREE",
                         "FOUR",
                         "FIVE",
                         "SIX",
                         "SEVEN",
                         "EIGHT",
                         "NINE"};

    char doubles[][10] ={"/",
                       "ELEVEN",
                       "TWELVE",
                       "THIRTEEN",
                       "FOURTEEN",
                       "FIVETEEN",
                       "SIXTEEN",
                       "SEVENTEEN",
                       "EIGHTTEEN",
                       "NINETEEN"};

    int taka, paisa, result;

    printf("Enter Item Cost(RRRR.PP): ");
    scanf("%d.%d",&taka,&paisa);

    printf("Total Will Be: ");

    if(taka>1000){
        result = taka/1000;
        taka%=1000;

        if(taka = 0)
            printf("%s THOUSAND,",singles[result]);
        else if(taka>0)
            printf("%s THOUSAND AND, ",singles[result]);
    }

    if(taka>100){
        result = taka/100;
        taka%=100;

        if(taka = 0)
            printf("%s HUNDRED,",singles[result]);
        else if(taka>0)
            printf("%s HUNDRED AND, ",singles[result]);
    }

    if(taka>20){
        result = taka/10;
        taka%=10;

        if(taka = 0)
            printf("%s HUNDRED,",singles[result]);
        else if(taka>0)
            printf("%s HUNDRED AND, ",singles[result]);
    }


    return 0;
}
