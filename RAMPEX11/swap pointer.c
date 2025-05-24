#include <stdio.h>

int main() {

    int a=4;
    int b=17;
    int *x=&a;
    int *y=&b;
    int temp=*x;
    *x=*y;
    *y=temp;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    return 0;
}case