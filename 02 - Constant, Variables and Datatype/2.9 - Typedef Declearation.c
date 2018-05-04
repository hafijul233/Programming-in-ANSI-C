#include <stdio.h>

typedef long long int llint;//type defination of long long int is now llint

int main()
{
  llint a,b,c;

  printf("Enter Two Big Numbers: ");
    scanf("%lld %lld",&a, &b);
    c = a+b;
    printf("%lld + %lld = %lld\n",a,b,c);
    return 0;
}
