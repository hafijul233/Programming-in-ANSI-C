#include <stdio.h>

int main()
{
  //size of operator

    printf("============== Character Data type ==============\n");
    printf("\tThe size of char = %d byte\n", sizeof(char));
    printf("\tThe size of unsigned char = %d byte\n", sizeof(unsigned char));

    printf("\n==============  Integer Data type  ==============\n");
    printf("The size of short int = %d byte\n", sizeof(short int));
    printf("The size of short unsigned int = %d byte\n\n", sizeof(unsigned short int));

    printf("The size of int = %d byte\n", sizeof(int));
    printf("The size of unsigned int = %d byte\n", sizeof(unsigned int));
    printf("The size of long int = %d byte\n\n", sizeof(long int));

    printf("The size of long long int = %d byte\n", sizeof(long long int));
    printf("The size of unsigned long long int = %d byte\n", sizeof(unsigned long long int));

    printf("\n==============   Float Data type   ==============\n");
    printf("The size of float = %d byte\n", sizeof(float));
    printf("The size of double = %d byte\n", sizeof(double));
    printf("The size of long double int = %d byte\n", sizeof(long double));

    printf("\n==============    Void Data type   ==============\n");
    printf("The size of void = %d byte\n", sizeof(void));


    return 0;
}
