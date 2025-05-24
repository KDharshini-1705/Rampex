#include <stdio.h>

int main() {

    int a=4;
    int b=17;
    int c=0;
    int *x=&a;
    int *y=&b;
    c=*x+*y;
    printf("sum=%d",c);
    return 0;
}