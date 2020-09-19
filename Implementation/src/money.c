#include "money.h"
//https://github.com/LawrenceMoruye/atm-machine-project/blob/master/catmcode/main.cpp
void validatePin(int PIN){
    int enteredPin;
    int validPin = 0;
    int attempts = 0;
    int maxAttempts = 3;

    do{
        scanf("%d", &enteredPin);
        attempts += 1;
        if(enteredPin == PIN){
            validPin = 1;
            printf("ok");
        }else{
            printf("The PIN you entered in invalid.\n");
            printf("Enter a valid PIN %d more attempts: ", maxAttempts-attempts);
        }
        if(attempts>=maxAttempts){
            printf("\npin blocked!.Visit our customer care \n");
            exit(1);
        }
    }while(validPin == 0);
}
//Till here
int with_cash(int withdraw, int cash)
{
printf("cash=%d w=%d",cash,withdraw);
 if(withdraw%100==0)
   {
    if(cash>=withdraw)
        {
        cash=cash-withdraw;
        printf("Amount After withdrawl of cash is %d\n",cash);
       }
       else
    {
    printf("You don't have enough Amount to Withdraw.Please Deposit Amount\n");
        }
   }
   else
   {
    printf("Enter Withdrawl Amount in 100's\n");
   }
  }

int deposits_cash(int deposit,int cash)
{
printf("cash=%d w=%d",cash,deposit);
    if(deposit%100==0)
   {
       cash=cash+deposit;
       printf("Balance After Depositing Amount is %d\n",cash);
   }
   else
   {
    printf("Please Enter Amount in 100's\n");
   }
}
 int to_send(int send,int cash)
 {

     int money,acc_no,re_acc_no;

     printf("Enter the account number:\n ");
     scanf("%d",&acc_no);
     printf("Enter the re-account number: \n");
     scanf("%d",&re_acc_no);
     if(acc_no==re_acc_no)
     {
         printf("confirm\n");
     }
     else
     {
         printf("Re-enter the account number\n");
         
     }
     if(send>cash)
     {
         printf("Insufficent cash\n");
     }
     else
     {
         money=cash-send;
         printf("The remaining amount is:%d\n",money);
     }
 }

