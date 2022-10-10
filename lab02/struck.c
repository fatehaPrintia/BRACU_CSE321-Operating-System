#include <stdio.h>

int main(void) {

  struct resturent {
    int quantity;
    int unit_price;
  };

  struct resturent paratha, water, vegetable;

  printf("paratha ");
  scanf(" %d %d", &paratha.quantity, &paratha.unit_price);
  printf(" water ");
  scanf(" %d %d", &water.quantity,&water.unit_price );
  printf("vegetable ");
  scanf(" %d %d", &vegetable.quantity,&vegetable.unit_price);
  int total_person;
  printf("Total person: ");
  scanf(" %d", &total_person);
  float bill=(float)(paratha.quantity*paratha.unit_price+vegetable.quantity*vegetable.unit_price+water.quantity*water.unit_price)/total_person;
printf("Individual people will pay: %.2f tk",bill);


  return 0;
}
