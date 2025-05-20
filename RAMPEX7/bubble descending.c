#include <stdio.h>

int main() {
    int i,j,temp;
    int arr[]={6,4,9,0,3,2,8};
    for(i=6;i>0;i--){
        for(j=i-1;j>0;j--){
        if(arr[i]<arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    }
    for(i=6;i>0;i--){
    printf("%d\n",arr[i]);
    }
    return 0;
    }