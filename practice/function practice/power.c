#include<stdio.h>
int power(int base, int exp){
    int result = 1;
    for(int i=1;i<=exp;i++){
        result=result*base;
    }
    return result;
}
int main(){
    int base,exp;
    printf("base?");
    scanf("%d",&base);
    printf("exp?");
    scanf("%d",&exp);
    int rud=power(base,exp);
    printf("%d",rud);
    return 0;
    
}