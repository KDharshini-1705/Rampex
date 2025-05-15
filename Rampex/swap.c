#include <stdio.h>

int main() {
    int a,b;
    a=23;
    b=43;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    

    return 0;
}