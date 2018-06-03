#include <stdio.h>

int main()
{
  int i, key, siz, low ,high, mid, pos;

  printf("Enter elements Size: ");
    scanf("%d",&siz);

    int elements[siz];

    printf("Enter %d Integers (Ascending order) :\n",siz);

    for(i=0; i<siz; i++){
      scanf("%d",&elements[i]);
    }

  printf("Enter Search Key: ");
    scanf("%d",&key);

  low = 0;
  high = siz-1;
  mid = (low+high)/2;

  while (low <= high) {
      if (elements[mid] < key)
         low = mid + 1;
      else if (elements[mid] == key) {
         printf("%d found at location %d.\n", key, mid+1);
         break;
      }
      else
         high = mid - 1;

      mid = (low + high)/2;
   }
   if (low > high)
      printf("Not found! %d isn't present in the Array.\n", key);
    return 0;
}
