#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void roundfigure(char number[], int r)
{
    int i, j, rchar,rnxchar;

    printf("Rounded Figure Will Be: ");

    for(i=0; i<strlen(number); i++)
    {
        printf("%c",number[i]);
        if(number[i] == '.' && r == 0)
            break;

        if(number[i] == '.' && r > 0){
            for(j=i+1; j<=i+r; j++){
                if(j == i+r){
                    rchar = (int)number[j] - 48;
                    rnxchar = (int)number[j+1] - 48;
                    if(rnxchar <=5)
                        printf("%c",rchar+48);
                    else
                        printf("%c",rchar+49);
                }
                else
                    printf("%c",number[j]);
            }
            break;
        }
    }
}

int main() {
    char number[100];
    int proof=0,len, i,j,deccount,round;

    printf("Enter a Number: ");
    gets(number);

    len = strlen(number);

    for(i=0; i<len;i++){
        if(number[i] == '.'){
            deccount = len - i-1;
            proof ++;
        }
    }

    if(proof == 0){
        printf("It is not a Float-Point Number.\n");
    }
    else if(proof > 1){
        printf("There are Too Many Decimal points");
    }
    else {
        printf("Enter a Length for Round(0%cx%c%d): ",243,243,deccount);
        scanf("%d",&round);

        roundfigure(number, round);
    }

    return 0;
}
