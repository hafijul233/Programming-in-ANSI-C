#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char string1[1000], string2[1000];

    printf("Enter First String: ");
    gets(string1);
    //getchar();

    printf("Enter Second String: ");
    gets(string2);
    //getchar();

    if(strcmp(string1, string2) > 0)
        printf("String 1 is Greater then String 2.\n");

    else if(strcmp(string1, string2) < 0)
        printf("String 1 is Less then String 2.\n");

    else
        printf("String 1 is Equal String 2.\n");

    return 0;
}
