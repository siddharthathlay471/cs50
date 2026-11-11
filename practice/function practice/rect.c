
#include <stdio.h>
 int get_area(int length,int width){
    return length*width;
 }
 int main()
{
    int x,y;
    printf("enter the length:");
    scanf("%d",&x);
    printf("enter the width:");
    scanf("%d",&y);
    int area = get_area(x,y);
    printf("area=%d",area);
    return 0;
}