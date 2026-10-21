#include <stdio.h>
struct point
{
    int god;
    float gow;
} *p,s;

int main()
{
    struct point s ={2,3.4};
    p=&s;
    printf("%d\n",((*p).god));
    printf("%f",p->gow);
    return 0;
}