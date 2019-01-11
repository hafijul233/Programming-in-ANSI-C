#include <stdio.h>

int main()
{
  int i=0, siz, counter=0;
  char text[10000];
  printf("Enter Character Array: ");
    scanf("%s",text);

  while(text[i] != '\0'){
    counter++;
    i++;
  }

  printf("Total Number of Characters: %d\n",counter);

  return 0;
}
