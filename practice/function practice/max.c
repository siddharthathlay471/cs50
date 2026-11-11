#include<stdio.h>
int find_max(int arr[], int size){
    int max=arr[0];
    for(int i=0;i<size;i++){
            if(arr[i]>max){
                max=arr[i];
            }
       
    }
     return max;
}
int main(){
    int score[5]={45,37,57,29,97};
    int max=find_max(score,5);
    printf("%d", max);
    return 0;
}