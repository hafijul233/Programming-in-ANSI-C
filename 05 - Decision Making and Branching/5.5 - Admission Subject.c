#include <stdio.h>

int main()
{
  int marks, math, physics, chemistry, total, mathPhy;

  printf("Enter Student Marks on Mathematics: ");
    scanf("%d",&math);

  printf("Enter Student Marks on Physics: ");
    scanf("%d",&physics);

  printf("Enter Student Marks on Chemistry: ");
    scanf("%d",&chemistry);

  total = math + physics + chemistry;
  mathPhy = math + physics;

  if(math >=60 && physics>=50 && chemistry>=40 && total >=200)
    printf("Candidate is Approved for Professional Course\n");

  else if(mathPhy>=150)
    printf("Candidate is Approved for Professional Course\n");

    return 0;
}
