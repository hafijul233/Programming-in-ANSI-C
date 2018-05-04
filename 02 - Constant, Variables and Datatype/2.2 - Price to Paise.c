#include <stdio.h>

int main()
{
    int beforedot, afterdot, paise;

    printf("Enter Items Price: ");
        scanf("%d.%d",&beforedot,&afterdot);

        paise = (beforedot*100)+afterdot;
        printf("%d.%d is Equal to %d paise\n",beforedot,afterdot,paise);
    return 0;
}
