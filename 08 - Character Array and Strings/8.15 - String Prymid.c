#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i, j, k, l;

    char str[] = {"abcdefghijklmnopqrstuvwxyz"};

    l = (strlen(str)/2)+1;
    for(i=0; i<l; i++)
    {
        for(j=0; j<l-i-1; j++)
            printf(" ");

        for(j=0; j<=(2*i+1)/2; j++)
            printf("%c",str[i+j]);

        for(k=(i+j)-1;k>i;k--)
            printf("%c",str[k-1]);

        printf("\n");
    }
    return 0;
}

