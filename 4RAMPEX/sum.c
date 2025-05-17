#include <stdio.h>

int main() {
    int n=123456,sum=0;
    while(n!=0)
    {
        sum+=n%10;
        n=n/10;
    }
    printf("the sum num is:%d",sum);
   return 0;
}