#include <stdio.h>
#include <math.h>


int main()
{
  double x;
  char t;

    printf("Enter Trigonometric Function(s->Sin c->Cos t->Tan): ");
      scanf("%c",&t);

    printf("Enter Radian Angle(x): ");
      scanf("%lf",&x);

    switch(t){
      case 's' : printf("Sin(%lf) = %lf",x,sin(x));
                  break;

      case 'c' : printf("Cos(%lf) = %lf",x,cos(x));
                  break;

      case 't' : printf("Tan(%lf) = %lf",x,tan(x));
                  break;


    }
    return 0;
}
