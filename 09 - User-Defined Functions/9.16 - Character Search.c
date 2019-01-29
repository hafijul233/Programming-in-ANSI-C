#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int find(char arr[], char search){
    int i, len;
    len = strlen(arr);
    for(i=0; i<len; i++) {
        if(arr[i] == search)
            return 1;
    }

    return 0;
}

int main() {
    int i, proof;
    char text[100000], key;
    printf("Enter a Character Array: ");
        gets(text);
    printf("Enter a Search Value: ");
    scanf("%c",&key);
        if(find(text, key) == 1) {
            printf("\" %c \" is Fond on Array.",key);
        }
        else {
            printf("\" %c \" is Not Fond on Array.",key);
        }

    return 0;
}
