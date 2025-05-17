#include <stdio.h>

int main() {
    int max=0;
    int arr[]={2,7,8,4,9};
    for(int i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
        printf("%d\n",max);

    return 0;
}