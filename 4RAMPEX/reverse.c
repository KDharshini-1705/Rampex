#include <stdio.h>

int main() {
    int n=123456,rev=0;
    while(n!=0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    printf("the reverse num is:%d",rev);
   return 0;
}