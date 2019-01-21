#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char singles[][10] = {"ZERO","ONE","TWO","THREE","FOUR","FIVE",
                      "SIX","SEVEN","EIGHT","NINE","TEN"
                     };

char doubles[][10] = {"/","ELEVEN","TWELVE","THIRTEEN","FOURTEEN","FIVETEEN",
                      "SIXTEEN","SEVENTEEN","EIGHTTEEN","NINETEEN"
                     };

char tenfactors[][10]  = {"/","/","TWENTY","THIRTY","FORTY","FIFTY",
                          "SIXTY","SEVENTY","EIGHTY","NINETY"
                         };


int main(){

    double price;
    int i,j, taka, poysa, result,temp;

    printf("Enter Item Cost(RRRR.PP): ");
    scanf("%lf",&price);

    price *=100;
    temp = (int)price;
    taka = temp/100;
    poysa = temp%100;

    printf("Total Will Be: %d.%d\n",taka, poysa);

//For Taka 0 - 9999 Taka Range
    if(taka>1000) {
        result = taka/1000;
        taka%=1000;

        if(taka == 0)
            printf("%s THOUSAND",singles[result]);
        else if(taka>0)
            printf("%s THOUSAND AND ",singles[result]);
    }

    if(taka>100) {
        result = taka/100;
        taka%=100;

        if(taka == 0)
            printf("%s HUNDRED",singles[result]);
        else if(taka>0)
            printf("%s HUNDRED AND ",singles[result]);
    }

    if(taka>20) {
        result = taka/10;
        taka%=10;

        if(taka == 0)
            printf("%s",tenfactors[result]);
        else if(taka>0)
            printf("%s ",tenfactors[result]);
    }

    if(taka>0) {
        printf("%s",singles[taka]);
    }

    if(poysa > 0) {
        printf(" Taka ");

    //For 0 - 99 Poysa Range
        if(poysa>20) {
            result = poysa/10;
            poysa%=10;

            if(poysa == 0)
                printf("%s",tenfactors[result]);
            else if(poysa>0)
                printf("%s ",tenfactors[result]);
        }
        if(poysa>0)
        {
            printf("%s",singles[poysa]);
        }

        printf(" Poysa.\n");
    }
    else
        printf(" Taka.");



    return 0;
}
