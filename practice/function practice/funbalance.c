
#include<stdio.h>
int withdraw(int balance, int amount)
{
    if(amount>balance){
        return balance;
    }
    else
    {
        return balance-amount;
    }
}
int main()
{
    int x,y,final_balance;
    printf("enter balance:");
    scanf("%d",&x);
    printf("enter amount");
    scanf("%d",&y);
    final_balance=withdraw(x,y);
    printf("the final balance is %d",final_balance);
    return 0;
    
    
}