#include <stdio.h>
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}

int main() {
    printf("%d",gcd(12,16));

    return 0;
}