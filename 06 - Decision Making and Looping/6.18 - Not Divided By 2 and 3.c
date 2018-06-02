#include <stdio.h>

int main(){

  int i, counter=0;

  printf("All Integer No Divided By 2 & 3: ");

  for(i=1;i<=100;i++){
    if(i%2!=0 && i%3!=0){
      printf("%d ",i);
      counter++;
    }
  }
  printf("\nTotal Numbers: %d\n",counter);

  return 0;
}
