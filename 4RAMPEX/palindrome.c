#include <stdio.h>

int main() {
    int n=1221,rev=0;
    int orig=n;
    while(n!=0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    if(orig==rev)
    {
        printf("its palindrome");
    }
    else
    {
        printf("not palindrome");
    }
    
   return 0;
}