#include <stdio.h>

int main() {
    int n=6,num=30,pos=5;
    int arr[]={4,6,10,12,13,32};
    for(int i=6;i>5;i--){
        arr[i]=arr[i-1];
        arr[pos]=num;num;
        }
     printf("%d",arr[pos]);
    return 0;
}