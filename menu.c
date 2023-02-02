#include <stdio.h>
int main(){
    int a, b;
  int num = 0;
  int total = 0;
  while (1)
  {
    printf("No.  Food Item     Price \n 1.   pizza      100\n 2.   Pasta        200\n 3.   nood1es     150\n 4.   Coffee       90\n 5.   sandwich        50\n");
    printf("Select item from these :\n");
    scanf("%d", &a);
    printf("Enter your quantity :\n");
    scanf("%d", &b);
    if (a == 1)
    {
      printf("You selected Noodles\n");
      num = 200;
    }
    else if (a == 2)
    {
      printf("You selected Pizza\n");
      num = 320;
    }
    else if (a == 3)
    {
      printf("You selected Sandwich\n");
      num = 60;
    }
    else if (a == 4)
    {
      printf("You selected Coffee\n");
      num = 80;
    }
    else if (a == 5)
    {
      printf("You selected juice\n");
      num = 90;
    }
    else
    {
      printf("Wrong input\n");
    }
    printf("Do you want to continue (Y/N)");
    char y;
    scanf("%c",&y);
    scanf("%c",&y);
    if(y == 'n') {total += b*num;break;} 
    else total += b * num;
  }
  printf("Your total is %d", total);
}