#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main()
{
    int found = 0,length;
    char *pos, *result, *pos1;
    char text[100000], pattern[100], replace[100];

    printf("Enter a Paragraph: ");
    gets(text);

    printf("Enter a Search Word:");
    gets(pattern);

    printf("Enter a replacement Word:");
    gets(replace);

    if(!text || !pattern || !replace)
    {
        found = 0;
        printf("Empty Fields\n");
    }
    else
    {
        pos = text;
        while((pos = strstr(pos, pattern)))
        {
            pos += strlen(pattern);
            found++;
        }

        if(found == 0)
        {
            printf("Word Not Found\n");
        }
        else
        {
            int length = ((strlen(text) - (strlen(pattern) * found)) + (strlen(replace) * found)) + 1;

            result = (char*)malloc(length);
            pos = text;

            while((pos1 = strstr(pos, pattern)))
            {
                int len = (pos1 - pos);
                strncat(result, pos, len);
                strncat(result, replace, strlen(replace));
                pos = (pos1 + strlen(pattern));
            }

            if(pos != (text + strlen(text)))
                strncat(result, pos, (text - pos));
                strcpy(text,result);

            printf("Replaced String: %s",text[1]);
        }
    }








    return 0;
}


