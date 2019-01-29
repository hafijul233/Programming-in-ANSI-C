#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAXN 1000

char string1[MAXN];
char string2[MAXN];

int siz1, siz2;

//function prototypes
void copy_strings();
void compare_strings();
void merge_strings();

int main()
{
    int choice;
    printf("Enter a Text String: ");
    gets(string1);
    while(1)
    {
        printf("\n\tPlease Choose a Option\n");
        printf("\t----------------------\n");
        printf("\t1-> Copy String\n");
        printf("\t2-> Compare String\n");
        printf("\t3-> Merge Strings\n");
        printf("\n\t0-> Quit\n");

        printf("\nEnter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1 : copy_strings();
            break;

        case 2 : compare_strings();
            break;

        case 3 : merge_strings();
            break;

        case 0 : exit(0);
            break;

        default : printf("Wrong Input!.Please Try Again.\n");
            break;
        }
    }
    return 0;
}

void copy_strings() {
    int i, len = strlen(string1);

    for(i = 0; i< len; i++) {
        string2[i] = string1[i];
    }
    string2[len] = '\0';

    printf("Copied String: %s\n", string2);
}

void compare_strings() {
    int i, len1, len2, len, proof = 0;

    len1 = strlen(string1);
    len2 = strlen(string2);

    if(len1 != len2){
        printf("String are Not Same.\n");
        return;
    }
    else {
        if(len1>len2)
            len = len1;
        else
            len = len2;

    for(i = 0; i< len; i++) {
        if(string1[i] != string2[i])
            proof++;
    }

    if(proof == 0)
        printf("Strings are Same.\n");
    else
        printf("Strings are Not Same.\n");
    }
}

void merge_strings()
{
    int i,counter = 0,total_len, str1_len;
    total_len = strlen(string1) + strlen(string2);

    char merge_str[total_len];

    for(i=0;i<strlen(string1); i++) {
        merge_str[i] = string1[i];
        counter++;
    }
    for(i= counter; i<total_len; i++) {
        merge_str[i] = string2[i - counter];
    }
    merge_str[total_len] = '\0';
    printf("Merged String: %s\n",merge_str);
}
