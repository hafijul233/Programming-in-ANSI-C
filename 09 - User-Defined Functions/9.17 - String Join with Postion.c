#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int len1 , len2;

void allocate(char arr1[], char arr2[], int ind){
    int i, curr_ind = 0;
    if(ind > len1){
        printf("Position is Out of Range.\nString Will Be Concatenation on Last Position.\n");
        printf("Merged String : ");
        puts(strcat(arr1, arr2));
    }
    else {

        char merged_string[len1+len2+1];

        for(i=0; i<ind; i++){ // Copy All The First Character from 0 to n position
            merged_string[i] = arr1[i];
        }
        for(i=0;i<len2; i++){ // copy all the character from string2 after n position
            merged_string[i+ind] = arr2[i];
        }
        curr_ind = i;// saving current merge index
        for(i = ind; i< len1; i++) {
            merged_string[curr_ind+i] = arr1[i];//copy all the left character from sting 1
        }

        printf("Reallocated String : ");
        puts(merged_string);
    }
}

int main() {
    int i, pos;
    char text1[100000],text2[100000];
    printf("Enter a First String: ");
        gets(text1);
    printf("Enter Second String: ");
        gets(text2);

    printf("Enter Posting Where to join(pos %c %d)",243, strlen(text1));
        scanf("%d",&pos);

    len1 = strlen(text1);
    len2 = strlen(text2);

    allocate(text1, text2, pos);

    return 0;
}
