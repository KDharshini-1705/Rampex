#include <stdio.h>

int main() {
    int found=0;
    int arr[]={8,10,15,20,13};
    int key=20;
    for(int i=0;i<4;i++){
        if(arr[i]==key){
            found=1;
            break;
        }
    }
    if(found){
        printf("20 is yes" );
    }
    else{
        printf("20 is Not");
    }
    return 0;
    }