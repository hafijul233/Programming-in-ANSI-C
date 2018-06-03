#include <stdio.h>

int main()
{
  int elements[100], n, c, d, pos, temp;

  printf("Enter number of elements: ");
    scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for(c=0; c<n; c++){
    scanf("%d", &elements[c]);
  }
  /* Selection Sort*/
  for(c=0; c< n-1; c++){
    pos = c;

    for (d=c+1; d<n; d++){

      if (elements[pos]>elements[d])
        pos = d;
    }
    if (pos!=c){

        temp = elements[c];
        elements[c] = elements[pos];
        elements[pos] = temp;
    }
  }
  /* /. Selection Sort */

  printf("Sorted list in ascending order:\n");

  for (c=0; c<n; c++){
      printf("%d\t", elements[c]);
   }
   return 0;
}
