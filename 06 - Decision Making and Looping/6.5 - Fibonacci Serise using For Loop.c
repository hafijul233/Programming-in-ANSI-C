#include <stdio.h>
#include <windows.h>

int main()
{
  unsigned long long fibo[50];

  fibo[0]=0;
  fibo[1]=1;

  int i, m;

  printf("Enter a Fibonacci Number limit<47: ");
    scanf("%d",&m);


    for(i=2;i<m;i++){
      fibo[i]=fibo[i-1]+fibo[i-2];
    }

    for(i=0;i<m;i++){
      printf("%d\t",fibo[i]);
    }

    printf("\n");

  system("pause");
    return 0;
}
