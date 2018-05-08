#include <stdio.h>

int main()
{
  char firstname[20], middlename[20], lastname[20];

    printf("Enter First, Middle and Lastname: ");
      scanf("%s %s %s",firstname, middlename, lastname);

      printf("\n(a) %s %c. %s\n",firstname, middlename[0], lastname);
      printf("\n(b) %c.%c. %s\n",firstname[0], middlename[0], lastname);
      printf("\n(a) %s %c.%c.\n",lastname, middlename[0], lastname[0]);

    return 0;
}
