#include <stdio.h>

int main()
{
  int first, second, third;

  printf("Enter Three Integer: ");
    scanf("%d %d %d", &first, &second, &third);

      printf("A = %d\n", first);
      printf("B = %d\n", second);
      printf("C = %d\n", third);

      printf("A = %d\tB = %d\tC = %d\n", first, second, third);
      printf("A = %d\tB = %d\tC = %d\n", first, second, third);// without Conversion Specifier ????


    return 0;
}
