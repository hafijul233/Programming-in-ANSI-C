#include <stdio.h>
#include <string.h>


int main()
{
  int consume_unit, state = 1;
  float ele_bil, total_bill, meter_charge = 100;
  char name[50];

  printf("Enter Customer Name: ");
    scanf("%s",name);

  printf("Enter Consumed Unit: ");
    scanf("%d",&consume_unit);

  if(consume_unit > 0 &&consume_unit <= 200){
    ele_bil = consume_unit * 0.80;
  }

  else if(consume_unit > 200 && consume_unit <= 300){
    ele_bil = consume_unit * 0.90;
  }

  else if(consume_unit > 300){
    ele_bil = consume_unit * 1.00;
  }

  else{
    printf("Negative Values Not allowed.\n");
    state = 0;
  }

  if(state == 1){

    total_bill = meter_charge + ele_bil;

    if(total_bill < 400.00){
      printf("Customer Name: %s\n Total Electrical Bill: %0.2f\n", name, total_bill);
    }

    else{
        total_bill += (total_bill * 15)/100;
      printf("Customer Name: %s\n Total Electrical Bill (include 15% tax): %0.2f\n", name, total_bill);
    }

  }
  else{
    printf("Sorry This account is Suspended.\n");
  }

    return 0;
}
