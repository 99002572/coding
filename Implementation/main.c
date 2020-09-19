#include "money.h"
int main()
{
 int choice;
 int cash=1000;
char c;
 int rewards=5;
 printf("Welcome to the HDFC Bank\n");
  printf("Insert the card \n");
const int PIN = 2018;
    printf("Enter your pin number: ");
    validatePin(PIN);
do{
  printf("Enter\n1-Withdraw\n2-Deposit\n3-Check Balance\n4-To Send Amount\n5-To check the rewards\n");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1:
  {
   int withdraw;
   printf("Enter Amount to withdraw\n");
   scanf("%d",&withdraw);
   with_cash(withdraw,cash);
   rewards+=rewards;
   break;
  }
  case 2:
  {
   int deposit;
   printf("Enter Amount to deposit\n");
   scanf("%d",&deposit);
   deposits_cash(deposit,cash);
   break;
  }
  case 3:
  {
   printf("Balance in the Account is %d\n",cash);
   break;
  }
  case 4:
    {
        int send;
        printf("Enter the amount");
        scanf("%d",&send);
        to_send(send,cash);
        break;
    }
  case 5:
    {
        printf("The rewards are: %d\n",rewards);
        break;
    }
  default :
  {
   printf("Enter Valid Choice\n");
   break;
  }
 }
 printf("To Continue Press 'Y' or any letter to exit\n");
 fflush(stdin);
 scanf("%c",&c);

   }while(c=='y' || c=='Y');
   printf("Thanks for using our ATM\n");
}


