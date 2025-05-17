include <stdio.h>

int main() {
    int sum=0;
    int arr[]={87,76,90,56,54,};
    for(int i=0;i<5;i++)
    {
        sum+=arr[i];
    }
    printf("%d",sum/5);
    return 0;
}