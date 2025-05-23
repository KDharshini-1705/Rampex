#include <stdio.h>
int sumofdigits(int n,int sum){
   if(n==0){
    return sum;
}
return sumofdigits(n/10,sum+n%10);
}
int main() {
    int n=52341;
    int result=sumofdigits(n,0);
    printf("%d",result);

    return 0;
}