#include <stdio.h>
int rem_balance(int x, int y){
    return x-y;
    
}
int main(){
   
    int my_money, food_bill;
        printf("enter the wallet money:");
        scanf("%d",&my_money);

        printf("enter the food bill:");
        scanf("%d",&food_bill);
    int balence_left=rem_balance(my_money,food_bill);
    printf("current balance is: %d", balence_left);
    return 0;
        
}