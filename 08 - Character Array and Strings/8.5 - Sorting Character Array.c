#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{

    int i, j, length;
    int last, current;
    char temp;
    char text[10000];

    printf("Enter a Text: ");
    gets(text);

    length = strlen(text);

    for(j=0; j<length; j++)
    {
        for(i=1; i<length -j; i++)
        {
            if(text[i-1] > text[i])
            {
                temp = text[i-1];
                text[i-1] = text[i];
                text[i] = temp;
            }
        }
    }

    printf("Sorted String: %s\n",text);

    return 0;
}

