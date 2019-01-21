#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i, counter = 0;
    int start, siz, length;

    char string1[10000], string2[10000];

    printf("Enter a Main String : ");
    gets(string1);

    length = strlen(string1);

    printf("Enter Sub-string size(<%d) : ",length);
    scanf("%d",&siz);

    printf("Enter Sub-string start position(1<x<%d) : ",length-siz);
    scanf("%d",&start);

    for(i=start; i<(start+siz); i++)
    {
     string2[counter++] = string1[i];
    }

    printf("Main String : %s\n Copied Sub-String : %s\n",string1, string2);

    return 0;
}

