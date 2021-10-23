#include<stdio.h>
int main(){
int choices, price, payment, change;
    printf("    ----------------------------\n");
    printf("    |  MILK TEA VENDO MACHINE  |\n");
    printf("    ----------------------------\n");
    
    
    printf("   Please pick you favorite order:\n");
    printf("====================================\n");
    printf("\n[1] Cookies & Cream (P100) \n[2] Hokkaido (P150) \n[3] Okinawa (P200) \n\nChoice:");
    scanf("%d", &choices);
    switch (choices){
    
    case 1:
    price = 100;
    printf("Please Input payment:");
    scanf("%d", &payment);
    if(payment>=price){
    printf("\n         You have purchased               Cookies & Cream Milk Tea!\n");
    printf("\n        Thank you! Ma'am/Sir\n         Please come again!\n");
    change = payment-price;  
    printf("\nChange: %d\n", change);  
}
else{ 
    printf("You don't have enough funds!");
}
    break;
    
    case 2:
    price = 150;
    printf("Please Input payment:");
    scanf("%d", &payment);
    if(payment>=price){
    printf("\n         You have purchased\n         Hokkaido Milk Tea!\n");
    printf("\n        Thank you! Ma'am/Sir\n         Please come again!\n");
    change = payment-price;  
    printf("\nChange: %d\n", change);
}
else{ 
    printf("You don't have enough funds!");
}
     break;
   
    
     case 3:
    price = 200;
    printf("Please Input payment:");
    scanf("%d", &payment);
    if(payment>=price){
    printf("\nYou have purchased Okinawa Milk Tea!\n");
    printf("\n        Thank you! Ma'am/Sir\n         Please come again!\n");
    change = payment-price;  
    printf("\nChange: %d\n", change);
}
else {
  printf("You don't have enough funds!");
}
  break;
   default:
   printf("\n     The item does not exist");
}
return 0;
}