#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
  int i, m, n;
  int start, length,text_len;

  char text[1000], substring[1000];

  printf("Enter a String : ");
    gets(text);

  text_len = strlen(text);

  printf("Enter Start Position of Sub String(<= %d ) : ",text_len);
    scanf("%d",&start);

  printf("Enter Length of Sub String (1 < x < %d) : ",text_len - start);
    scanf("%d",&length);


  for(i=0; i<length; i++){
    substring[i] = text[(start-1) + i];
  }

  printf("Main String\t : %s\nSub String\t : %s\n",text,substring);

    return 0;
}
