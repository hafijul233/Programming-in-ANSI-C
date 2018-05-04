#include <stdio.h>

int main()
{
  float frequency, resistance, inductance, capacitance = 0.01;
  float onebylc, rsqubycsqu,diff_freq;

    printf("Enter Circuit Inductance (L): ");
      scanf("%f", &inductance);

    printf("Enter Circuit Resistance (R): ");
      scanf("%f", &resistance);

    while(capacitance <= 0.1){

      onebylc = 1 / (inductance * capacitance);
      rsqubycsqu = pow(resistance, 2)/ 4 * pow(capacitance, 2);

        diff_freq = -1*(onebylc - rsqubycsqu);

        frequency = sqrt(diff_freq);

        printf("Frequency: %f\t @ Capacitance: %f\n",frequency, capacitance);
      capacitance +=0.01;
    }
    return 0;
}
