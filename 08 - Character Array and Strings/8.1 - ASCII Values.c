#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
  int i=0;
  char name[10000];

    printf("Enter Your Name: ");
      gets(name);

  while(name[i]!='\0'){
    printf("%c Character's ASCII Value: %d\n",name[i],(int)name[i]);
    i++;
  }
    return 0;
}
