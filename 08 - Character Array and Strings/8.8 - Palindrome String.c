#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main()
{
    char text[100], temp[100];
    int i, length = 0, proof = 0;

    printf("Palindrome Tester\n");
    printf("Enter Text: ");

        scanf("%s",text);// for %s we do not need &
        length = strlen(text);

    for(i=0; i<length; i++) {
        temp[i] = text[length-i-1];
    }

    proof = strcmp(text, temp);

    if(proof <= 0)
        printf("Input String is Palindrome.\n");

    else
        printf("Input String is not Palindrome.\n");

    return 0;
}
