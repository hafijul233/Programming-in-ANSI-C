#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void uppercase(char text[]) {

    int i;

    for(i=0; i<strlen(text); i++) {
        text[i] = toupper(text[i]);
        printf("%c",text[i]);
    }

    return text;
}

int main ()
{
    char text[10000];
    printf("Enter a Paragraph: ");
    gets(text);

    printf("All Uppercased String: ");
        uppercase(text);

    return 0;
}

