#include <stdio.h>

int main()
{
  int first, second, third, forth;

    printf("Enter Books ISBN Number: ");
      scanf("%d-%d-%d-%d",&first,&second,&third,&forth);

    //if(){
      printf("\n\t\tBook Information\n\t ------------------------------\n");

      printf("Region Number: %d\n", first);
      printf("Publisher Number: %d\n", second);
      printf("Book Identifies: %d\n", third);
      printf("Checker digits: %d\n", forth);

    /*
    }
    else{
      printf("Books ISBN Number is invalid.\n");
    }
    */
    return 0;
}
