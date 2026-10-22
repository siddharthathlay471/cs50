#include <stdio.h>
#include <string.h>
struct student
{
    int x;
    float y;
    char g[25];
} e1,e2,e3;

int main()
{
    struct student e1 ={10,19.5, "i am god"},
                 e2 ={11,20.5, "i am god"},
                e3 ={12,21.5 };
    strcpy(e3.g,"i am god");
    printf("%d,%f,%s\n",e1.x,e1.y,e1.g );
    printf("%d,%f,%s\n",e3.x,e3.y,e3.g );
    printf("%d,%f,%s\n",e2.x,e2.y,e2.g );
    
    return 0;
}