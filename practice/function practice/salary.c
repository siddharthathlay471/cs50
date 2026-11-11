
#include<stdio.h>
int get_bonus(int salary)
{
    if(salary>=10000){
        return 2000;
    }
        else
        return 500;
    
}
int total_salary(int salary)
{
    int end =get_bonus(salary)+salary;
    return end;
}
int main(){
    int total,x;
    printf("enter salary");
    scanf("%d",&x);
    total = total_salary(x);
    printf("total %d", total);
    return 0;

}