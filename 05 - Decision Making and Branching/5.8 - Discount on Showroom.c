#include <stdio.h>

float cloth(int item_price){

  if(item_price >= 0 && item_price <= 100)
    return item_price;

  else if(item_price >= 101 && item_price <= 200)
    return item_price -= (item_price * 5.0)/100;

  else if(item_price >= 201 && item_price <= 300)
    return item_price -= (item_price * 7.5)/100;

  else if(item_price >= 301)
    return item_price -= (item_price * 10.0)/100;

}


float handloom(int item_price){

  if(item_price >= 0 && item_price <= 100)
    return item_price -= (item_price * 5.0)/100;

  else if(item_price >= 101 && item_price <= 200)
    return item_price -= (item_price * 7.5)/100;

  else if(item_price >= 201 && item_price <= 300)
    return item_price -= (item_price * 10.0)/100;

  else if(item_price >= 301)
    return item_price -= (item_price * 15.0)/100;

}


int main()
{
  int item_price, item_type;
  float net_price;

  printf("Enter Item Type (1-> Cloth 2->Handloom): ");
    scanf("%d",&item_type);

  printf("Enter Item Price: ");
    scanf("%d",&item_price);

  switch(item_type){
    case 1: { net_price = handloom(item_price);
              printf("Net Amount of item : %0.2f Tk\n",net_price);
                break;
            }

    case 2: { net_price = cloth(item_price);
              printf("Net Amount of item : %0.2f Tk\n",net_price);
                break;
            }

  }


    return 0;
}
