#include <stdio.h>
int power(int a,int b){
int power=1;
    for(int i=0;i<b;i++){
    power=power*a;
    }
    printf("%d",power);
    return power;
}
int main() {
    power(2,3);

    return 0;
}