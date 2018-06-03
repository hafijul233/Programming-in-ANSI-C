#include <stdio.h>

int main()
{
  int i=0, siz, counter=0;
  char text[10000], key;
  printf("Enter Character Array: ");
    scanf("%s",text);

  getchar();

  printf("Enter Search Key Character: ");
    scanf("%c",&key);

  while(text[i] != '\0'){

      if(text[i] == key) counter++;

    i++;
  }

  printf("Total Number of '%c' Characters: %d\n", key, counter);

  return 0;
}

