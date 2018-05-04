#include <stdio.h>

int main()
{
  int length,width;
  int area, perimeter;

  printf("Enter a Length and Width : ");
    scanf("%d %d",&length, &width);

    area = length * width;
    perimeter = 2*(length + width);

    printf("Area of Rectangle : %d\n",area);
    printf("Perimeter of Rectangle : %d\n",perimeter);

    return 0;
}
